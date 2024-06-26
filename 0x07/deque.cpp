#include <iostream>
using namespace std;

const int MX = 1000005;
int dat[2*MX+1];
int head = MX, tail = MX;

void push_front(int x) {
	dat[head++] = x;
}

void push_back(int x) {
	dat[tail++] = x;
}

void pop_front() {
	head--;
}

void pop_back() {
	tail--;
}

int front() {
	if (head == MX) {
		cout << "empty!\n";
		return -1;
	}
	return dat[head - 1];
}

int back() {
	if (tail == MX) {
		cout << "empty!\n";
		return -1;
	}
	return dat[tail - 1];
}

void test() {
	push_front(1);
	push_front(2);
	push_front(3);
	cout << "front: " << front() << '\n';
	pop_front();
	pop_front();
	cout << "front: " << front() << '\n';
	push_back(10);
	push_back(11);
	cout << "back: " << back() << '\n';
	pop_back();
	cout << "back: " << back() << '\n';
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	test();

	return 0;
}