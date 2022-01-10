//3번

#include <iostream>
using namespace std;
int a;
int b;

int main() {
	cout << "두 수를 입력하여라";
	cin >> a;
	cin >> b;

	if (a>b) {
		std::cout << a;
	}
	else if (b > a) {
		std::cout << b;
	}

	return 0;
}
