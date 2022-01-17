#include <iostream>
using namespace std;

class Tower {
public:
	int height;
	int getHeight();
	int getHeight(int h);
	int seoulTower(int h);
};

int Tower::getHeight(int h) {
	return h;
}

int Tower::getHeight() {
	return 1;
}

int Tower::seoulTower(int h) {
	height = h;
	return h;
}

int main() {
	Tower myTower;
	Tower seoulTower(100);
	cout << "높이는 " << myTower.getHeight() << "미터" << endl;
	cout << "높이는" << seoulTower.getHeight() << "미터" << endl;
}
