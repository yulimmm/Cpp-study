//6번

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random {
public:
	Random();
	int next();
	int nextInRange(int s, int e);
};

Random::Random() {
	srand((unsigned)time(0));
}

int Random::next() {
	int n = rand();
	if (n % 2 == 0) {
		return n;
	}
	else return n + 1;
}

int Random::nextInRange(int s, int e) {
	int n = rand();
	int h = n % (e - s + 1) + s;
	if ( h%2== 0) {
		return h;
	}
	else return h+1;
}

int main() {
	Random r;

	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "10 까지의 랜덤 정수 10 개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 10);
		cout << n << ' ';
	}
	cout << endl;
}
