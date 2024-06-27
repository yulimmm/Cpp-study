#include <iostream>
#include <string>
using namespace std;

const int MX = 100005;
int stack[MX];
int pos = 0;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	cin >> s;

	int length = 0;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '(') {
			stack[pos++] = i;
		}
		if (s[i] == ')') {
			pos--;
			length += pos;
		}
	}

	cout << length;

	return 0;
}