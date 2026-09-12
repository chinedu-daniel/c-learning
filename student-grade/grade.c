#include <stdio.h>
#include "grade.h"

int getScore() {
	int score;

	printf("Enter a score: ");
	scanf("%d", &score);

	return score;
}

int validateScore(int score) {
	if (score < 0 || score > 100) {
		return 0;
	} else {
		return 1;
	}
}

int calculateGrade(int score) {
	if (score >= 85) {
		return 1;
	} else if (score >= 70) {
		return 2;
	} else if (score >= 55) {
		return 3;
	} else if (score >= 40) {
		return 4;
	} else {
		return 5;
	}
}

void displayGrade(int grade) {
	switch(grade) {
		case 1:
			printf("Distinction\n");
			break;
		case 2:
			printf("Excellent\n");
			break;
		case 3:
			printf("Good\n");
			break;
		case 4:
			printf("Pass\n");
			break;
		case 5:
			printf("Fail\n");
			break;
	}
}
