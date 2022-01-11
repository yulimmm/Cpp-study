//5번

#include <iostream>
using namespace std;

int main() {
	cout << "문자들을 입력하라(100개 미만). ";
	char text[100];
	cin.getline(text, 100);

	int count = 0;
	for (int i = 0; i < strlen(text); i++) {
		if (text[i] == 'x') {
			count++;
		}
	}

	cout << "x의 개수는" << count;

	
	return 0;
}
