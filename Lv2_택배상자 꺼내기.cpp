#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int w, int num) {
    int answer = 0;
    int linecount = 0;
    int num_index;
    num_index = num % w;
    if (num_index == 0)
        num_index = w;
    int n_index;
    n_index = n % w;
    if (n_index == 0)
        n_index = w;
    int numline = (num * 1 / w) + 1;
    if (num_index == w)
        numline--;
    linecount = (n * 1 / w) + 1;
    if (n_index == w)
        linecount--;
    if (linecount % 2 == 0)
        n_index = w - n_index + 1;
    if (numline % 2 == 0)
        num_index = w - num_index + 1;
    if (num_index == n_index)
    {
        answer = linecount - numline;
        answer++;
        return answer;
    }
    if (num_index < n_index)
    {
        if (linecount % 2 == 0)
        {
            answer = linecount - numline;
            return answer;
        }
        answer = linecount - numline;
        answer++;
        return answer;
    }
    else
    {
        if (linecount % 2 == 0)
        {
            answer = linecount - numline + 1;
            return answer;
        }
        answer = linecount - numline;
        return answer;
    }


}

