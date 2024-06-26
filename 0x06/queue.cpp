#include <iostream>
using namespace std;

const int MX = 1000005;
int dat[MX];
int head = 0, tail = 0;

void push(int x) {
	dat[tail++] = x;
}

void pop() {
	head++;
}

int front() {
	return dat[head];
}

int back() {
	if (head == (tail-1)) {
		cout << "empty\n";
		return -1;
	}
	return dat[tail-1];
}

void test() {
	push(1);
	push(2);
	push(3);
	cout << "front: " << front() << "   back: " << back() << '\n'; //123
	pop();
	cout << "front: " << front() << "   back: " << back() << '\n'; //23
	push(4);
	pop();
	cout << "front: " << front() << "   back: " << back() << '\n'; //34
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	test();

	return 0;
}