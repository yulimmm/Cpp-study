#include <iostream>
#include <string>
using namespace std;

string arr[2189]; //3^7+2

void cut(int n)
{
	if (n == 1) return;
	int j = n / 3;
	if (arr[j][0] != arr[j-1][0] ) {

	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N = 0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		getline(cin, arr[i]);
	}

	cut(N);

	return 0;
}