#include <stdio.h>

int score;

int main() {
	printf("Enter your score: ");
	scanf("%d", &score);

	if(score < 0 || score > 100) {
		printf("Invalid score\n");
	}
	else if(score >= 90){
		printf("Grade: Excellent\n");
	}
	else if(score >= 70) {
		printf("Grade: Good\n");
	}
	else if(score >= 50) {
		printf("Grade: Pass\n");
	}
	else {
		printf("Grade: Fail\n");
	}

	return 0;
}
