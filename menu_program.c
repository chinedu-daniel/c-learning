#include <stdio.h>

int main() {
	int choice;


	do {
		printf("======= MENU =======\n");
		printf("1. Add\n");
		printf("2. Subtract\n");
		printf("3. Multiply\n");
		printf("4. Divide\n");
		printf("5. Exit\n");

		printf("Enter a choice: ");
		scanf("%d", &choice);

		switch(choice) {
			case 1:
				printf("You selected Add\n");
				break;

			case 2:
				printf("You selected Subtracted\n");
				break;

			case 3:
				printf("You selected Multiply\n");
				break;

			case 4:
				printf("You selected Divide\n");
				break;

			case 5:
				printf("Exiting.....\n");
				break;

			default:
				printf("Invalid choice\n");
		}

	} while (choice != 5);


	return 0;
}
