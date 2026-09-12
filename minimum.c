#include <stdio.h>

int  main() {
	int number;
	int minimum;

	printf("Enter a number: ");

	scanf("%d", &minimum);

	for (int i = 2; i <= 5; i++) {
		printf("Enter a number: ");

		scanf("%d", &number);

		if (number < minimum) {
			minimum = number;
		}

	printf("Minimum: %d\n", minimum);

	}




	return 0;
}
