//2번

#include <iostream>
int a = 1;

int main() {
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			std::cout << i << "x" << j << "=" << i * j << "    ";
			a++;
		}
		std::cout << "\n";
	}

	return 0;
}
