//8번

#include <iostream>
using namespace std;

int main() {
	char name[50];
	char longestName[50];

	cout << "5 명의 이름을 ';'으로 구분하여 입력하세요"<<endl<<">>";

	for (int i = 1; i <= 5; i++) {
		cin.getline(name, 50, ';');

		if (i==1) {
			strcpy_s(longestName,name);
		}
		else if(strlen(name)>strlen(longestName)){
			strcpy_s(longestName, name);
		}
	}
	cout << "가장 긴 이름은 " << longestName;

	return 0;
}
