#include <iostream>
using namespace std;

const int MX = 1000005;
int dat[MX];
int pos = 0;

void push(int x) {
	dat[pos++] = x;
}

void pop() {
	if (pos > 0) {
		pos--;
	}
}

int top() {
	return dat[pos-1];
}

void print() {
	for (int i = 0; i < 10; i++) {
		cout << dat[i] << " ";
	}
}

void test() {
	push(1);
	push(2);
	push(3);
	cout << "top: " << top() << '\n'; //3
	pop();
	cout << "top: " << top() << '\n'; //2
	pop();
	cout << "top: " << top() << '\n'; //1
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	test();

	return 0;
}