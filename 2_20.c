// (Diameter, Circumference and Area of a Circle) Write a program that reads in the radius
// of a circle and prints the circle’s diameter, circumference and area. Use the constant value 3.14159
// for p. Perform each of these calculations inside the printf statement(s) and use the conversion spec-
// ifier %f. [Note: In this chapter, we’ve discussed only integer constants and variables. In Chapter 3
//we’ll discuss floating-point numbers, i.e., values that can have decimal points.] 



#include <stdio.h>
#include <math.h>

int main() {

	const float pi = 3.14159;
	float radius = 0;

	printf("%s", "Enter the radius of a circle: ");
	scanf("%f", &radius);

	printf("%s %6.6f %s %6.6f %s %6.6f", "Diameter is ", radius * 2, "\nCircumference is ", 2 * pi * radius, "\nArea is ", pi * pow(radius, 2));

	return 0;

}
