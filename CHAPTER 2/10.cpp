//10번

#include <iostream>
using namespace std;

int main() {
	char text[10];
	
	cout << "문자열 입력 >>";

	cin.getline(text, 10);

	for (int i=0; i < strlen(text); i++) {
		for (int j=0; j <= i; j++) {
			cout << text[j];
		}
		cout << endl;
	}
}
