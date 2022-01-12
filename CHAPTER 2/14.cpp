//14번

#include <iostream>
using namespace std;

int main() {
	char coffee[100];
	int num;
	int price;
	int sum = 0;

	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500" << endl;

	while(true) {
		cout << "주문>> ";
		cin >> coffee >> num;

		if (strcmp(coffee,"에스프레소")==0) {
			price = 2000 * num;
			cout << price << "원입니다. 맛있게 드세요" << endl;
			sum += price;
		}
		else if (strcmp(coffee, "아메리카노") == 0) {
			price = 2300 * num;
			cout << price << "원입니다. 맛있게 드세요" << endl;
			sum += price;
		}
		else if (strcmp(coffee, "카푸치노") == 0) {
			price = 2500 * num;
			cout << price << "원입니다. 맛있게 드세요" << endl;
			sum += price;
		}

		if (sum > 20000) {
			break;
		}
	}
	cout << "오늘 " << sum << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~";
	return 0;
}
