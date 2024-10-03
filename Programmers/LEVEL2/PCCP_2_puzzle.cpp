//[PCCP 기출문제] 2번 / 퍼즐 게임 챌린지
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(vector<int> diffs, vector<int> times, long long limit) {
    int count = diffs.size();
    long long totalTime = 0;
    int curT;
    int prevT;

    int minLevel = *max_element(diffs.begin(), diffs.end()); // diffs 중 최대 값
    int start = 1;
    int end = minLevel;  // 이분 탐색 범위는 1 ~ 최대 난이도

    while (start <= end) {
        int level = (start + end) / 2;
        totalTime = 0;  // 각 반복마다 totalTime 초기화

        for (int k = 0; k < count; k++) {
            if (level >= diffs[k]) {
                totalTime += times[k];
            } else {
                int trynum = diffs[k] - level;
                long long tmptime = 0;
                curT = times[k];
                prevT = (k > 0) ? times[k - 1] : times[k];  // 범위 체크하여 prevT 설정
                tmptime = (curT + prevT) * trynum + curT;
                totalTime += tmptime;
            }

            // 제한 시간 초과 시 빠져나감
            if (totalTime > limit) break;
        }

        if (totalTime <= limit) {
            // 제한 시간을 만족하면 더 작은 레벨을 탐색
            minLevel = level;
            end = level - 1;
        } else {
            // 제한 시간을 초과하면 더 큰 레벨을 탐색
            start = level + 1;
        }
    }

    return minLevel;
}
