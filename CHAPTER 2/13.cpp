//13번

#include <iostream>
using namespace std;

int main() {
	cout << "*****승리장에 오신 것을 환영합니다.*****" << endl;
	int num;
	int people;
	while (true) {
		cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4 >>";
		cin >> num;

		if (num == 1) {
			cout << "몇인분?";
			cin >> people;
			cout << "짬뽕 " << people << "인분 나왔습니다." << endl;
		}
		else if (num == 2) {
			cout << "몇인분?";
			cin >> people;
			cout << "짜장 " << people << "인분 나왔습니다." << endl;
		}
		else if (num == 3) {
			cout << "몇인분?";
			cin >> people;
			cout << "군만두 " << people << "인분 나왔습니다." << endl;
		}
		else if (num == 4) {
			cout << "오늘 영업은 끝났습니다.";
			break;
		}
		else {
			cout << "다시 주문하세요!!" << endl;
		}
	}
	return 0;
}
