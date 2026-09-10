//
//  main.c
//  2_16
//
//  Created by Dane Mahaffey on 9/9/26.
//

#include <stdlib.h>
#include <stdio.h>

int main() {
    
    int num1 = 0, num2 = 0;
    
    printf("%s", "Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    printf("\nSum is %d", num1 + num2);
    printf("\nProduct is %d", num1 * num2);
    printf("\nQuotient is %d", num1 / num2);
    printf("\n Remainder is %d", num1 % num2);
    
    return 0;
}
