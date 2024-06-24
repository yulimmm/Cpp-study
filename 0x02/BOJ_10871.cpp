#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, X;
	cin >> N >> X;
	int* array = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> array[i];
	}

	for (int i = 0; i < N; i++) {
		if (X > array[i]) {
			cout << array[i] << " ";
		}
	}
	delete[] array;
	return 0;
}