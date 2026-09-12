#include <stdio.h>

int main() {
	int number;
	int even = 0;
	int odd = 0;

	for (int i = 1; i <= 5; i++) {
		printf("Enter a number: ");
		scanf("%d", &number);

		if(number % 2 == 0) {
			even++;
		} else {
			odd++;
		}
	}

	printf("Even Number: %d\n", even);

        printf("Odd Number: %d\n", odd);


	return 0;
}
