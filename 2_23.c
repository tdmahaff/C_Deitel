/*
* (Largest and Smallest Integers) Write a program that reads in three integers and then deter-
mines and prints the largest and the smallest integers in the group. Use only the programming tech-
niques you have learned in this chapter.
*/

#include <stdio.h>

int main() {

	int num1 = 0, num2 = 0, num3 = 0;

	printf("%s", "Enter three integers: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	if (num1 > num2 && num1 > num3) {
		printf("%s %d\n", "Largest integer is: ", num1);
	}
	else if (num2 > num1 && num2 > num3) {
		printf("%s %d\n", "Largest integer is: ", num2);
	}
	else {
		printf("%s %d\n", "Largest integer is: ", num3);
	}

	if (num1 < num2 && num1 < num3) {
		printf("%s %d\n", "Smallest integer is: ", num1);
	}
	else if (num2 < num1 && num2 < num3) {
		printf("%s %d\n", "Smallest integer is: ", num2);
	}
	else {
		printf("%s %d\n", "Smallest integer is: ", num3);
	}

	return 0;

}