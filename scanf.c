#include <stdio.h>

int main() {
	char name[50];
	int age;
	float score;

	printf("Enter your name: ");
	scanf("%s", name);

	printf("Enter your age: ");
	scanf("%d", &age);

	printf("Enter your score: ");
	scanf("%f", &score);

	printf("\n\n");

	printf("Student Information\n");
        printf("----------------------\n");

	printf("Name: %s\n", name);
	printf("Age: %d\n", age);
	printf("Score %.2f\n", score);

	return 0;
}
