//16번

#include <iostream>
using namespace std;

int main() {
	char text[10000];
	
	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다." << endl;
	cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다. " << endl;

	cin.getline(text, 10000, ';');

	cout << "총 알파벳의 수 " << strlen(text);

	while (isalpha(char c)) {

	}
}
