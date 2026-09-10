// Odd or Even) Write a program that reads an integer and determines and prints whether
// it’s odd or even. [Hint: Use the remainder operator. An even number is a multiple of two. Any mul-
// tiple of two leaves a remainder of zero when divided by 2.

#include <stdio.h>

int main() {
	int num1 = 0;
	printf("%s", "Enter an integer: ");
	scanf_s("%d", &num1);

	
if (num1 % 2 == 0) {
		printf("%d is even.\n", num1);
	}
	else {
		printf("%d is odd.\n", num1);
	}

	return 0;


}