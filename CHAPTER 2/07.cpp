//7번

#include <iostream>
using namespace std;

int main() {
	char text[100];
	//char yes[3];

	while (1) {
		cout << "종료하고싶으면 yes를 입력하세요>>";
		cin.getline(text,100);
		if (text[0] == 'y'&&text[1]=='e'&&text[2]=='s') {
			cout << "종료합니다...";
			break;
		}
	}

	return 0;
}
