#include "iostream"
int x, y, z;
char question;


int main() {
	while (true) {
		std::cout << "1- Addition\n2- Cikarma\n3- Carpma\n4- Multiplication\n";
		std::cin >> question;
		if (question == '1') {
			std::cout << "First Value "; std::cin >> x;
			std::cout << "Second Value"; std::cin >> y;
			std::cout << x + y; std::cout << "\n";
		}
		else if (question == '2') {
			std::cout << "First Value"; std::cin >> x;
			std::cout << "Second Value"; std::cin >> y;
			std::cout << x - y; std::cout << "\n";
			
		}
		else if (question == '3') {
			std::cout << "First Value"; std::cin >> x;
			std::cout << "Second Value"; std::cin >> y;
			std::cout << x * y; std::cout << "\n";
		}
		else if (question == '4') {
			std::cout << "First Value"; std::cin >> x;
			std::cout << "Second Value"; std::cin >> y;
			std::cout << x / y; std::cout << "\n";
		}
			
	}

		

}