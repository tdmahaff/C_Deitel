/*
* (Multiples) Write a program that reads in two integers and determines and prints whether
the first is a multiple of the second. [Hint: Use the remainder operator.]
* 
* */ 

#include <stdio.h>

int main(){
	int num1 = 0;
	int num2 = 0;
	printf("%s", "Enter two integers: ");
	scanf_s("%d %d", &num1, &num2);
	if (num2 == 0) {
		printf("Cannot divide by zero.\n");
	}
	else if (num1 % num2 == 0) {
		printf("%d is a multiple of %d.\n", num1, num2);
	}
	else {
		printf("%d is not a multiple of %d.\n", num1, num2);
	}
	return 0;
}