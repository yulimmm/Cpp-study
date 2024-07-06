#include <iostream>
using namespace std;

int result = 0;
int n = 10;

int sum(int i) //내가 짠 거
{
	result += i;
	i++;
	if (i == n+1) return result;
	else sum(i);
}

void func1(int n) { //모범 답안 n부터 1까지 출력. 
	if (n == 0) return;
	cout << n << ' ';
	func1(n - 1);
}

int func2(int n) {
	if (n == 0) return 0;
	return n + func2(n - 1);
}

void func(int a) //구글 검색으로 스택 메모리 해제하기. 
{
	if (a == 0) return;
	func(a - 1);
}

//a^b mod m 
int func3(int a, int b, int m) { //int overflow때문에 답이 1이 아닌 0으로 나옴. 해결을 위해 중간중간 계속 m으로 나눠서 나머지만 챙기면 됨. 
	int val = 1;
	while (b--) val *= a;
	return val % m;
}

//아래 방법을 사용하면 O(b)에 구할 수 있음. (long long 하려면 m이 2^32보다 작아야 하긴 함.) 
using ll = long long;
ll func4(ll a, ll b, ll m) {
	ll val = 1;
	while (b--) val = val * a % m;
	return val;
}

int main()
{
	//cout << sum(1) << endl;
	//cout << func2(10);
	func(100000);
	cout << "done";
	return 0;
}