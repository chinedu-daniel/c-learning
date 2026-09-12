#include <stdio.h>

int main() {
	int number;
	int maximum = 0;


	for (int i = 1; i <= 5; i++) {
		printf("Enter a number: ");

		scanf("%d", &number);

		if (number > maximum) {
                	maximum = number;
        	}
	}

	printf("Maximum: %d\n", maximum);



	return 0;
}
