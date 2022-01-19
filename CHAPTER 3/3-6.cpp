#include <iostream>
using namespace std;

class Rectangle {
public:
	int width, height;
	Rectangle();
	Rectangle(int w, int h);
	Rectangle(int length);
};




int main() {
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSquare()) cout << "rect1은 정사각형이다. " << endl;
	if (rect2.isSquare()) cout << "rect2은 정사각형이다. " << endl;
	if (rect3.isSquare()) cout << "rect3은 정사각형이다. " << endl;
}
