#include <stdio.h>

int factorial(int number) {
	if (number == 0) {
		return 1;
	}

	return number * factorial(number - 1);
}

int fibonacci(int number) {
	if (number == 0) {
		return 0;
	}

	if (number == 1) {
		return 1;
	}

	return fibonacci(number - 1) + fibonacci(number - 2);
}

int main() {
	int result = factorial(5);

	int fibo = fibonacci(6);

	printf("Factorial: %d\n", result);

	printf("Fibonacci: %d\n", fibo);
}
