//
//  main.c
//  C Language
//
//  Created by Eric Zhang on 6/13/16.
//  Copyright (c) 2016 Eric Zhang. All rights reserved.
//

/* Transfer Letter to Number */
#include <stdio.h>
#include <math.h>

int main(void){
    
    int x;
    double j = 0.0, y = 1.0, k = 0.0;
    printf("Enter a positive number: ");
    scanf("%d", &x);
    
    do{
        j = (double)((x / y + y) / 2);
        y = (double)((x / j + j) / 2);
        k = j - y;
    }while(fabs(k) > 0.000001 * y);
    
    printf("Square root: %.5f", y);
    
    return 0;
}