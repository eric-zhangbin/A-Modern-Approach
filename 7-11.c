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
    
    char name, initial;
    
    printf("Enter a first and last name: ");
    scanf("%c", &name);
    
    do{putchar(name);}
    while ((name = getchar()) != ' ');
    
    printf(", ");
    
    initial = getchar();
    putchar(initial);
    printf(".");
    
    
    return 0;
}