#include <stdio.h>

int main() {
	int numbers[5] = {10, 20, 30, 40, 50};

	int ages[4] = {5, 10, 15, 20};

	for (int i = 0; i < 5; i++) {
		if (numbers[i] == 30) {
			printf("Found\n");
		}
	}

	for (int j = 0; j < 4; j++) {
		if (ages[j] == 45) {
			printf("Not found\n");
		}
	}



	return 0;
}
