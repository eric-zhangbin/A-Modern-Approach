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
    
    int i = 1, j = 0;
    float m;
    char ch;
    
    printf("Enter a sentence: ");
    scanf("%c", &ch);
    
    do{
        j++;
        
        if (ch == ' ')
            i++;
        
        scanf("%c", &ch);
    } while(ch != '\n');
    
    m = (float)(j - i + 1) / i;
    
    printf("Average word length: %.1f", m);
    
    return 0;
}