/*
 
 Comparing Integers) Write a program that asks the user to enter two integers, obtains the
 numbers from the user, then prints the larger number followed by the words “is larger.” If the
 numbers are equal, print the message “These numbers are equal.” Use only the single-selection
 form of the if statement you learned in this chapter.
 */

#include <stdlib.h>
#include <stdio.h>

int main(void) {
   
    int num1 = 0, num2 = 0;
    printf("%s", "Enter two integers");
    scanf("%d %d", &num1, &num2);
    
    if(num1 > num2){
        printf("%d %s", num1, " is larger");
        
    }
    else if(num1 == num2){
        printf("%s", "These numbers are equal");
    }
    else{
        printf("%d %s", num2, " is larger");
    }
    
    
    return 0;
    
}
