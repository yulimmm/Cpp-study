#include <iostream>
#include <string>
#include <list>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string init;
	list<char> S;
	
	cin >> init;
	for (auto c: init) {
		S.push_back(c);
	}
	auto cursor = S.end();

	int TestCase;
	char Command;
	cin >> TestCase;

	for (int i = 0; i < TestCase; i++) {
		cin >> Command;
		if (Command == 'L') {
			if (cursor != S.begin()) cursor--;
		}
		else if (Command == 'D') {
			if (cursor != S.end()) cursor++;
		}
		else if (Command == 'B') {
			if (cursor != S.begin()) {
				cursor--;
				cursor = S.erase(cursor);
			}
		}
		else if (Command == 'P') {
			char add;
			cin >> add;
			S.insert(cursor, add);
		}
		else {
			cout << "Error";
			return -1;
		}
	}

	for (auto c : S) cout << c;

	return 0;
}