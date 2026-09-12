#include <stdio.h>

int main() {
	int a;
	int b;

	printf("Enter first number: ");
	scanf("%d", &a);

	printf("Enter second number: ");
	scanf("%d", &b);

	int result = a + b;
	printf("Addition: %d\n", result);

	result = a - b;
	printf("Subtraction: %d\n", result);

	result = a * b;
	printf("Multiplication: %d\n", result);

	result = a / b;
	printf("Division: %d\n", result);

	result = a % b;
	printf("Remainder: %d\n", result);

	return 0; 
}
