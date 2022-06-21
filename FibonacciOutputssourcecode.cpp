#include <iostream>

/*function to work out fib sequence.
	F = F1 + F2 */

void Fib(double num) {

	double a = 0, b = 1, c = 0;

	for (double i = 0; i < num; i++) {
		std::cout << a << " ,";
		
		c = a + b;
		a = b;
		b = c;
	}
}

int main(){
	//code to output the sequence generated.
	double num;

	std::cout << "Enter how many Fibonacci number you want: \n";
	std::cin >> num;
	std::cout << "The Fibonacci Sequence is :\n";
	Fib(num);
	
	return 0;

	}