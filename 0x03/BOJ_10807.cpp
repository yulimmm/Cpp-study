#include <iostream>
#include <vector>
using namespace std;

int v_count[200] = { 0 };

int main()
{
	int N, v, a;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a;
		v_count[a + 100]++;
	}

	cin >> v;
	cout << v_count[v + 100];

	return 0;
}