/*
Arithmetic, Largest Value and Smallest Value) Write a program that inputs three different
integers from the keyboard, then prints the sum, the average, the product, the smallest and the larg-
est of these numbers. Use only the single-selection form of the if statement you learned in this chap-
ter. The screen dialogue should appear as follows:
*/

#include <stdio.h>

int main(){
    
    int num1 = 0, num2 = 0, num3 = 0;
    int sum = 0, product = 0, smallest = 0, largest = 0;
    float average = 0;
    
    printf("%s", "Input three different integers separated by spaces: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    sum = num1 + num2 + num3;
    average = (float)sum / 3;
    product = num1 * num2 * num3;
    
    if(num1 > num2 && num1 > num3){
            largest = num1;
            }
    else if(num2 > num1 && num2 > num3){
         largest = num2;
         }
    else {
         largest = num3;
         }
    if(num1 < num2 && num1 < num3){
            smallest = num1;
            }
    else if(num2 < num1 && num2 < num3){
            smallest = num2;
         }
    else {
         smallest = num3;
         }
    
    printf("%s %d\n", "Sum is ", sum);
    printf("%s%f\n", "Average is ", average);
    printf("%s %d\n", "Product is ", product);
    printf("%s %d\n", "Smallest is ", smallest);
    printf("%s %d\n", "Largest is ", largest);
    
 
 return 0;   
 
    
}
