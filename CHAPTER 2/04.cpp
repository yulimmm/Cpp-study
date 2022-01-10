//4번

#include <iostream>
using namespace std;
float a,b,c,d,e;

int main() {
	cout << "5개의 실수를 입력하라";
	cin >> a >> b >> c >> d >> e;

	if (a>b && a>c && a>d && a>e) {	
		cout << a;
	}
	else if (b > a && b > c && b > d && b > e) {
		cout << b;
	}
	else if (c > a && c > b && c > d && c > e) {
		cout << c;
	}
	else if (d > a && d > c && d > b && d > e) {
		cout << d;  
	}
	else {
		cout << e;
	}

	return 0;
}
