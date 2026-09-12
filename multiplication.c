#include <stdio.h>

int main() {
	int number;

	printf("Enter a numbers: ");
	scanf("%d", &number);

	for (int i = 1; i <= 5; i++) {
		for(int number2 = 1; number2 <= 10; number2++) {
			printf("%d x %d = %d\n", i, number2, i * number2);
		}
		printf("\n");
	}


	return 0;
}
