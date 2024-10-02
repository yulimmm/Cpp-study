//LEVEL 1 [PCCP 기출문제] 1번 / 동영상 재생기
#include <string>
#include <vector>

using namespace std;

vector<string> commands;


int str2sec(string str) {
    int min1 = str[0] - '0';
    int min2 = str[1] - '0';
    int min = min1 * 10 + min2;
    int sec1 = str[3] - '0';
    int sec2 = str[4] - '0';
    int sec = sec1 * 10 + sec2;
    return min * 60 + sec;
}

string sec2str(int num) {
    int min = num / 60;
    char min1 = min / 10 + '0';
    char min2 = min % 10 + '0';
    int sec = num % 60;
    char sec1 = sec / 10 + '0';
    char sec2 = sec % 10 + '0';

    // 크기가 5인 문자열로 초기화하여 올바른 인덱스 접근이 가능하게 함
    string result(5, '0');
    result[0] = min1;
    result[1] = min2;
    result[2] = ':';
    result[3] = sec1;
    result[4] = sec2;

    return result;
}

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    int cur = str2sec(pos);
    int ops = str2sec(op_start);
    int ope = str2sec(op_end);
    int len = str2sec(video_len);

    for (int i = 0; i < commands.size(); i++) {
        if (cur >= ops && cur < ope) cur = ope;
        if (commands[i] == "prev") {
            if (cur < 10) {
                cur = 0;
            }
            else cur = cur - 10;
        }
        else if (commands[i] == "next") {
            cur += 10;
        }
        if (cur >= ops && cur < ope) cur = ope;
        if (cur > len) cur = len;
    }

    string answer = sec2str(cur);
    return answer;
}
