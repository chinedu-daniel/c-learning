
#include <stdio.h>

int main() {
	int numbers[5] = {10, 45, 20, 80, 30};

	int max = numbers[0];

	for (int i = 1; i < 5; i++) {
		if (numbers[i] > max) {
			max = numbers[i];
		}
	}

	printf("Maximum: %d\n", max);



	return 0;
}
