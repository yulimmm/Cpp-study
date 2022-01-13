//15번

#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	char a[1];

	while (1) {
		cout << "? ";
		cin >> num1 >> a >> num2;
		if (strcmp(a, "+") == 0) {
			cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
		}
		else if (strcmp(a, "-") == 0) {
			cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
		}
		else if (strcmp(a, "*") == 0) {
			cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
		}
		else if (strcmp(a, "/") == 0) {
			cout << num1 << "/" << num2 << "=" << num1 / num2 << endl;
		}
		else if (strcmp(a, "%") == 0) {
			cout << num1 << "%" << num2 << "=" << num1 % num2 << endl;
		}
	}
}
