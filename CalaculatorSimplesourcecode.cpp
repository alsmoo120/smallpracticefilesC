#include <iostream>
#include <iomanip>

//put the whole program into main,make it as simple as possible
int main() {

	//intilise variables for input, and for charcter operator

	double num1, num2;
	//char op is the operator eg / = divide, * multiply
	char op;
	//get inputs
	std::cout << "Enter the two numbers,\n";
	std::cin >> num1 >> num2;

	std::cout << "Enter operation; + , - , * , / please \n";
	std::cin >> op;

	//display inputs
	std::cout << num1 << " " << op << " " << num2 << " = ";

	//the function part, using a switch statement
	switch (op) {
	case '+':
		std::cout << num1 + num2 << std::endl;
		break;
	case '-':
		std::cout << num1 - num2 << std::endl;
		break;
	case '*':
		std::cout << num1 * num2 << std::endl;
		break;
	case '/':
		if (num2 != 0) {
			std::cout << num1 / num2 << std::endl;
		}
		else {
			std::cout << "You can't divide by 0\n";
		}
		break;
	default:
		std::cout << "incorrect operation or number, sorry \n";

	}
	return 0;
}