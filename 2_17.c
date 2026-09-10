/*(Printing Values with printf) Write a program that prints the numbers 1 to 4 on the same
line. Write the program using the following methods.
a) Using one printf statement with no conversion specifiers.
b) Using one printf statement with four conversion specifiers.
c) Using four printf statements.
*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    
    int num1 = 1, num2 = 2, num3 = 3, num4 = 4;
    
    printf("%s", "1 2 3 4");
    printf("\n%d %d %d %d", num1, num2, num3, num4);
    
    printf("\n%d", num1);
    printf("\n%d", num2);
    printf("\n%d", num3);
    printf("\n%d", num4);
    
    return 0;
    
}
