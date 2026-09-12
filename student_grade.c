#include <stdio.h>

int main() {
	char name[50];
	int age;
	float score1;
	float score2;
	float score3;
	float total;
	float average;

	printf("Enter student name: ");
	scanf("%s", name);

	printf("Enter student age: ");
	scanf("%d", &age);

	printf("Enter score 1: ");
	scanf("%f", &score1);

	printf("Enter score 2: ");
	scanf("%f", &score2);

	printf("Enter score3: ");
	scanf("%f", &score3);

	total = score1 + score2 + score3;

	average = total / 3;

	printf("\n");

	printf("Student Information\n");

	printf("Name: %s\n", name);

	printf("Age: %d\n", age);

	printf("Score 1: %f\n", score1);

	printf("Score 2: %f\n", score2);

	printf("Score 3: %f\n", score3);

	printf("Total: %f\n", total);

	printf("Average: %f\n", average);

	if(average < 0 || average > 100) {
		printf("Invalid number %f\n", average);
	} else if(average >= 90) {
		printf("Grade: Excellent %f\n", average);
	} else if(average >= 70) {
		printf("Grade: Good %f\n", average);
	} else if(average >= 50) {
		printf("Grade: Pass %f\n", average);
	} else {
		printf("Grade: Fail %f\n", average);
	}

	return 0;
}
