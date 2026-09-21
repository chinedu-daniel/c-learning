#include <stdio.h>

int main() {
	int sum = 0;

	int numbers[4] = {10, 20, 30, 40};

	int ages[5] = {5, 10, 15, 20, 25};

	for (int i = 0; i < 4; i++) {
		sum = sum + numbers[i];
	}

	printf("Sum: %d\n", sum);

	sum = 0;

	for (int j = 0; j < 5; j++) {
		sum = sum + ages[j];
	}
	printf("Sum: %d\n", sum);



	return 0;
}
