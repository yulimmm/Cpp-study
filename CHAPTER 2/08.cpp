//8번

#include <iostream>
using namespace std;

int main() {
	char name[50];
	char longestName[50];

	cout << "5명의 이름을 ';'으로 구분하여 입력하세요" << endl;
	cout << ">>";

	for (int i = 0; i < 5; i++) {
		cin.getline(name, 50, ';');
		cout << i + 1 << " : " << name << endl;
		if (i == 0) {
			strcpy_s(longestName, name);
		}
		else if (strlen(longestName) < strlen(name)) {
			strcpy_s(longestName, name);
		}
	}

	cout << "가장 긴 이름은 " << longestName << endl;

	return 0;
}
