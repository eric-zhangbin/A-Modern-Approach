//
//  main.c
//  C Language
//
//  Created by Eric Zhang on 6/13/16.
//  Copyright (c) 2016 Eric Zhang. All rights reserved.
//

/* Transfer Letter to Number */
#include <stdio.h>

int main(void){
    
    int num1, denom1, num2, demon2, result_num, result_denom;
    
    char ch;
    
    printf("Enter two fractions separated by a operator sign: ");
    scanf("%d/%d %c %d/%d", &num1, &denom1, &ch, &num2, &demon2);
    
    switch (ch) {
            
        case '+':
            result_num = num1 * demon2 + num2 * denom1;
            result_denom = denom1 * demon2;
            printf("The sum is %d/%d\n", result_num, result_denom);
            break;
            
        case '-':
            result_num = num1 * demon2 - num2 * denom1;
            result_denom = denom1 * demon2;
            printf("The sum is %d/%d\n", result_num, result_denom);
            break;
            
        case '*':
            result_num = num1 * num2;
            result_denom = denom1 * demon2;
            printf("The sum is %d/%d\n", result_num, result_denom);
            break;
            
        case '/':
            result_num = num1 * demon2;
            result_denom = denom1 * num2;
            printf("The sum is %d/%d\n", result_num, result_denom);
            break;
            
        default:
            break;
    }
    
    
    
    return 0;
}
