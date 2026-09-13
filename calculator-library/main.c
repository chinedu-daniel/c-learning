#include <stdio.h>
#include "calculator.h"

int main() {
	int addition = add(10, 5);
	int subtraction = subtract(10, 5);
	int multiplication = multiply(10, 5);
	int division = divide(10, 5);



	printf("Addition: %d\n", addition);
	printf("Subtraction: %d\n", subtraction);
	printf("Multiplication: %d\n", multiplication);
	printf("Division: %d\n", division);


	return 0;
}
