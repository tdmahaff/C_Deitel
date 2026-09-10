/*
* (Body Mass Index Calculator) We introduced the body mass index (BMI) calculator in
Exercise 1.12. The formulas for calculating BMI are
or
Create a BMI calculator application that reads the user’s weight in pounds and height in inches
(or, if you prefer, the user’s weight in kilograms and height in meters), then calculates and displays
the user’s body mass index. Also, the application should display the following information from
the Department of Health and Human Services/National Institutes of Health so the user can eval-
uate his/her BMI
*/

#include <stdio.h>

int main() {

	double weight, height, bmi;

	printf("%s", "Enter weight in pounds: ");
	scanf_s("%lf", &weight);
	printf("%s", "Enter height in inches: ");
	scanf_s("%lf", &height);

	bmi = (weight * 703) / (height * height);

	printf("BMI is: %.2f\n", bmi);
	if (bmi < 18.5) {
		printf("Underweight\n");
	}
	else if (bmi >= 18.5 && bmi < 25) {
		printf("Normal weight\n");
	}
	else if (bmi >= 25 && bmi < 30) {
		printf("Overweight\n");
	}
	else {
		printf("Obesity\n");
	}

	return 0;

}