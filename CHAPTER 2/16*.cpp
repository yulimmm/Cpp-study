//16번

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int num = 0;
    int alphabet[27] = { 0 };
    cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다.\n";
    cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다.\n";
    char alpha[10000];
    cin.getline(alpha, 10000, ';');

    for (int i = 0; i < strlen(alpha); ++i) {
        if (isalpha(tolower(alpha[i])) != 0) {             //소문자로 바꾼 알파벳이 아니면?
            ++alphabet[alpha[i] - 97];                     //i번째 알파벳 -97..? 
            ++num;                                         //알파벳 개수 (알파벳이 아닌데 왜 더해?)
        }
    }
    cout << "총 알파벳 수 " << num << endl;
    for (int i = 0; i < 26; ++i) {                          //알파벳은 총 27개이니, 27번
        char asc = i + 'a';                                 //1+a=b, 2+a=c 야,,?
        cout << asc << "(" << alphabet[i] << ")";
        for (int j = 0; j < 4 - alphabet[i] / 10; ++j)       //왜 4에서 빼고 10으로 나눠...?
            cout << " ";
        cout << ":  ";
        for (int j = 1; j <= alphabet[i]; ++j)              //알파벳 개수만큼 *출력
            cout << "*";
        cout << endl;
    }
}
