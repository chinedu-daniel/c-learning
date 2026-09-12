#include <stdio.h>

int main() {
        int number;

        int even = 0;
        int odd = 0;

        int sum = 0;

        float average;

        int positive = 0;
        int negative = 0;

        int minimum;
        int maximum;

        printf("Enter a number: ");
        scanf("%d", &number);

        maximum = number;
        minimum = number;
        sum = number;

        if (number > 0) {
                positive++;
        } else if (number < 0) {
                negative++;
        }

	if (number % 2 == 0) {
 		even++;
	} else {
		odd++;
	}

        for (int i = 2; i <= 5; i++) {
                printf("Enter a number: ");
                scanf("%d", &number);

                sum = sum + number;

                if (number > maximum) {
                        maximum = number;
                }

                if (number < minimum) {
                        minimum = number;
                }

		if (number > 0) {
                	positive++;
       		 } else if (number < 0) {
                	negative++;
        	}

		if (number % 2 == 0) {
			even++;
		} else {
			odd++;
		}
        }

        average = (float)sum / 5;

        printf("Maximum: %d\n", maximum);
        printf("Minimum: %d\n", minimum);
        printf("Sum: %d\n", sum);
        printf("Average: %.2f\n", average);
        printf("Positive: %d\n", positive);
        printf("Negative: %d\n", negative);

	printf("Even numbers: %d\n", even);
	printf("Odd numbers: %d\n", odd);


	return 0;
}
