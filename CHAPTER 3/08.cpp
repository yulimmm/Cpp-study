//8번

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Integer {
public:
	int number;
	Integer(int i);
	Integer(string c);
	int get();
	int set(int i);
	int isEven();
};

Integer::Integer(int i) {
	number = i;
}

int Integer::set(int i) {
	number = i;
	return number;
}

Integer::Integer(string c) {
	number = stoi(c.substr(0, 3));
}

int Integer::get() {
	return number;
}

int Integer::isEven() {
	if (number % 2 == 0 ) {
		return 1;
	}
	else return 0;
}

int main() {
	Integer n(30);
	cout << n.get() << ' ';
	n.set(50);
	cout << n.get() << ' ';

	Integer m("300");
	cout << m.get() << ' ';
	cout << m.isEven();
}
