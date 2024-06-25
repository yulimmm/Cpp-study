#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[26] = { 0 };
	string S;

	cin >> S;
	for (int i = 0; i < S.length(); i++) {
		if (S[i] == 'a') arr[0]++;
		if (S[i] == 'b') arr[1]++;
		if (S[i] == 'c') arr[2]++;
		if (S[i] == 'd') arr[3]++;
		if (S[i] == 'e') arr[4]++;
		if (S[i] == 'f') arr[5]++;
		if (S[i] == 'g') arr[6]++;
		if (S[i] == 'h') arr[7]++;
		if (S[i] == 'i') arr[8]++;
		if (S[i] == 'j') arr[9]++;
		if (S[i] == 'k') arr[10]++;
		if (S[i] == 'l') arr[11]++;
		if (S[i] == 'm') arr[12]++;
		if (S[i] == 'n') arr[13]++;
		if (S[i] == 'o') arr[14]++;
		if (S[i] == 'p') arr[15]++;
		if (S[i] == 'q') arr[16]++;
		if (S[i] == 'r') arr[17]++;
		if (S[i] == 's') arr[18]++;
		if (S[i] == 't') arr[19]++;
		if (S[i] == 'u') arr[20]++;
		if (S[i] == 'v') arr[21]++;
		if (S[i] == 'w') arr[22]++;
		if (S[i] == 'x') arr[23]++;
		if (S[i] == 'y') arr[24]++;
		if (S[i] == 'z') arr[25]++;
	}
	
	for (int i = 0; i < 26; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}


/*
#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int freq[26] = { 0 };
	string s;
	cin >> s;
	for (auto c : s)
		freq[c - 'a']++;
	for (int i = 0; i < 26; i++)
		cout << freq[i] << ' ';

	return 0;
}
*/