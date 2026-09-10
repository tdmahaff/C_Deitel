// Separating Digits in an Integer) Write a program that inputs one five-digit number, sep-
// arates the number into its individual digits and prints the digits separated from one another by three
// spaces each.[Hint:Use combinations of integer division and the remainder operation.] For exam -
// ple, if the user types in 42139, the program should print

#include <stdio.h>

int main() {
	int number;
	printf("Enter a five-digit number: ");
	scanf_s("%d", &number);
	while (number < 10000 || number > 99999) {
		printf("Please enter a valid five-digit number.\n");
		scanf_s("%d", &number);
	}

	int num1 = number / 10000; // first digit
	int num2 = (number / 1000) % 10; // second digit
	int num3 = (number / 100) % 10; // third digit
	int num4 = (number / 10) % 10; // fourth digit
	int num5 = number % 10; // fifth digit

	printf("%d   %d   %d   %d   %d\n", num1, num2, num3, num4, num5);

	return 0;

}