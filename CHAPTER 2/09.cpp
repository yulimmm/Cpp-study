//9번

#include <iostream>
using namespace std;

int main() {
	char name[10], address[20], age[10];

	cout << "이름은?";
	cin.getline(name, 10);

	cout << "주소는?";
	cin.getline(address, 20);

	cout << "나이는?";
	cin.getline(age, 10);

	cout << name << ", " << address << ", " << age << "세";

	return 0; 
}
