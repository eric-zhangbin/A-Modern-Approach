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
    
    int n;
    long long int s = 1;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        s = s * i;
    }
    
    printf("Factorial of %d: %lld", n, s);
    
    
    
    return 0;
}