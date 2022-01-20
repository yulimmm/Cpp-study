//3번 

#include <iostream>
using namespace std;

class Account {
public:
	string name;
	int id, money;
	Account(string n, int id, int m);
	int deposit(int d);
	string getOwner();
	int withdraw(int w);
	int inquiry();
};

Account::Account(string n, int id, int m) {
	name = n;
	id = id;
	money = m;
}

int Account::deposit(int d) {
	money += d;
	return money;
}

string Account::getOwner() {
	return name;
}

int Account::withdraw(int w) {
	money -= w;
	return money;
}

int Account::inquiry() {
	return money;
}

int main() {
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
}
