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
    
    float a, b, c;
    char ch1, ch2;
    
    printf("Enter an expression: ");
    scanf("%f %c %f %c %f", &a, &ch1, &b, &ch2, &c);
    
    switch (ch1) {
        case '+':
            b = a + b;
            break;
            
        case '-':
            b = a - b;
            break;
            
        case '*':
            b = a * b;
            break;
            
        case '/':
            b = a / b;
            break;
            
        default:
            break;
    }
    
    printf("Value of expression: ");
    
    switch (ch2) {
        case '+':
            c = b + c;
            printf("%.1f\n", c);
            break;
            
        case '-':
            c = b - c;
            printf("%.1f\n", c);
            break;
            
        case '*':
            c = b * c;
            printf("%.1f\n", c);
            break;
            
        case '/':
            c = b / c;
            printf("%.1f\n", c);
            break;
            
        default:
            break;
    }
    
    
    return 0;
}