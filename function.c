#include <stdio.h>

int add(int a, int b) {
	return a + b;
}

int subtract(int a, int b) {
	return a -b;
}

int multiply(int a, int b) {
	return a * b;
}

int divide(int a, int b) {
	return a / b;
}

int main() {
	int addition = add(10, 5);
	int subtraction = subtract(12, 4);
	int multiplication = multiply(9, 10);
	int division = divide(10, 5);


	printf("Addition: %d\n", addition);
	printf("Subtraction: %d\n", subtraction);
	printf("Multiplication: %d\n", multiplication);
	printf("Division: %d\n", division);


	return 0;
}
