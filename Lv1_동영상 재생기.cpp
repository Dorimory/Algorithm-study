#include <string>
#include <vector>
#include <sstream>
#include <iomanip>

using namespace std;

// 시간 문자열을 초 단위로 변환
time_t toSeconds(const string& timeStr) {
    int minutes = stoi(timeStr.substr(0, 2));
    int seconds = stoi(timeStr.substr(3, 2));
    return minutes * 60 + seconds;
}

// 초 단위를 시간 문자열로 변환
string toTimeString(time_t totalSeconds) {
    int minutes = totalSeconds / 60;
    int seconds = totalSeconds % 60;
    stringstream ss;
    ss << setfill('0') << setw(2) << minutes << ":" << setfill('0') << setw(2) << seconds;
    return ss.str();
}

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    time_t videoLength = toSeconds(video_len);
    time_t currentPosition = toSeconds(pos);
    time_t openingStart = toSeconds(op_start);
    time_t openingEnd = toSeconds(op_end);

    // 초기 위치에서 오프닝 구간 처리
    if (openingStart <= currentPosition && currentPosition <= openingEnd) {
        currentPosition = openingEnd;
    }

    for (const string& command : commands) {
        if (command == "prev") {
            currentPosition = max(currentPosition - 10, (time_t)0);
        }
        else if (command == "next") {
            currentPosition = min(currentPosition + 10, videoLength);
        }

        // 명령 실행 후 오프닝 구간 확인 및 처리
        if (openingStart <= currentPosition && currentPosition <= openingEnd) {
            currentPosition = openingEnd;
        }
    }

    return toTimeString(currentPosition);
}
