#include <iostream>
#include <list>
#include <vector>

int main() {
    int N, K;
    std::cin >> N >> K;

    std::list<int> people;
    for (int i = 1; i <= N; ++i)
        people.push_back(i);

    std::vector<int> result;
    auto it = people.begin();

    while (!people.empty()) {
        for (int i = 1; i < K; ++i) {
            ++it;
            if (it == people.end()) it = people.begin();
        }
        result.push_back(*it);
        it = people.erase(it);
        if (it == people.end()) it = people.begin();
    }

    std::cout << "<";
    for (size_t i = 0; i < result.size(); ++i) {
        std::cout << result[i];
        if (i != result.size() - 1) std::cout << ", ";
    }
    std::cout << ">";
    return 0;
}
