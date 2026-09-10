//(Table of Squares and Cubes) Using only the techniques you learned in this chapter, write
//a program that calculates the squares and cubes of the numbers from 0 to 10 and uses tabs to print
//the following table of values :

#include <stdio.h>
#include <math.h>

int main() {

	for (int i = 0; i <= 10; i++) {
		printf("%d\t%d\t%d\n", i, (int)pow(i, 2), (int)pow(i, 3));
	}

	return 0;

}