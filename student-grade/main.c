#include <stdio.h>
#include "grade.h"

int main() {
	int score = getScore();

	int valid = validateScore(score);

	if (valid) {
		int grade = calculateGrade(score);
		displayGrade(grade);
	} else {
		printf("Invalid score\n");
	}

	return 0;
}
