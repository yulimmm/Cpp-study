#include <iostream>
#include <string>
using namespace std;

const int MX = 100005;
char stack[MX];
int pos = 0;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s = "init";
	bool result;

	while (1) {
		result = true;
		pos = 0;
		getline(cin, s);

		if (s.size() == 1 && s[0] == '.') return 0;

		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '(') {
				stack[pos++] = '(';
			}
			else if (s[i] == '[') {
				stack[pos++] = '[';
			}
			else if (s[i] == ')') {
				if (pos != 0 && stack[pos - 1] == '(') {
					pos--;
				}
				else {
					result = false;
				}
			}
			else if (s[i] == ']') {
				if (pos != 0 && stack[pos - 1] == '[') {
					pos--;
				}
				else {
					result = false;
				}
			}
		}
		if (pos == 0 && result == true) {
			cout << "yes\n";
		}
		else cout << "no\n";
	}

	return 0;
}