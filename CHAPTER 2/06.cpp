//6번

#include <iostream>
using namespace std;

int main() {
	char password[100];
	char check[100];

	cout << "새 암호를 입력하세요";
	cin.getline(password,100);

	cout << "새 암호를 다시 한 번 입력하세요";
	cin.getline(check,100);

	if (password[strlen(password)] == check[strlen(check)]) {
		cout << "같습니다";
	}
	else {
		cout << "같지 않습니다";
	}
	
	return 0;
}
