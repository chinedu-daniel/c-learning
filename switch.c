#include <stdio.h>

int main() {
	int choice;

	printf("Enter a number: ");
	scanf("%d", &choice);

	switch(choice) {
		case 1:
			printf("Add\n");
			break;

		case 2:
			printf("Subtract\n");
			break;

		case 3:
			printf("Multiply\n");
			break;

		default:
			printf("Invalid choice\n");

		return 0;
	}
}
