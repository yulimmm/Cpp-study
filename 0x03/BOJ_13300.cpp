#include <iostream>
#include <vector>
using namespace std;

int room[12] = {};

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, K, S, G;
	cin >> N >> K;

	for (int i = 0; i < N; i++) {
		cin >> S >> G;
		if (S == 0) room[G-1]++;
		else room[G+5]++;
	}

	int need = 12;
	for (int i = 0; i < 12; i++) {
		if (room[i] == 0) need--;
		if (room[i] > K) {
			if (room[i] % K == 0) {
				need += room[i] / K - 1;
			}
			else need += room[i] / K;
		}
	}

	cout << need;

	return 0;
}