//4번

#include <iostream>
using namespace std;

class CoffeeMachine {
public:
	int coffee, water, sugar;
	CoffeeMachine(int c, int w, int s);
	int drinkEspresso();
	int drinkAmericano();
	int drinkSugarCoffee();
	int fill();
	void show();
};

CoffeeMachine::CoffeeMachine(int c, int w, int s) {
	coffee = c;
	water = w;
	sugar = s;
}

int CoffeeMachine::drinkEspresso() {
	coffee = coffee - 1;
	water = water - 1;
	sugar = sugar;
	return coffee, water, sugar;
}

int CoffeeMachine::drinkAmericano() {
	coffee = coffee - 1;
	water = water - 2;
	sugar = sugar;
	return coffee, water, sugar;
}

int CoffeeMachine::drinkSugarCoffee() {
	coffee = coffee - 1;
	water = water - 2;
	sugar = sugar - 1;
	return coffee, water, sugar;
}

void CoffeeMachine::show() {
	cout << "커피 머신 상태, " << "커피:" << coffee << " 물:" << water << " 설탕:" << sugar << endl;
}

int CoffeeMachine::fill() {
	coffee = 10;
	water = 10;
	sugar = 10;
	return coffee, water, sugar;
}

int main() {
	CoffeeMachine java(5, 10, 3);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.fill();
	java.show();
}
