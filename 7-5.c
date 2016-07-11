//
//  main.c
//  C Language
//
//  Created by Eric Zhang on 6/13/16.
//  Copyright (c) 2016 Eric Zhang. All rights reserved.
//

/* Transfer Letter to Number */
#include <stdio.h>
#include <ctype.h>

int main(void){
    
    char ch;
    int sum = 0;
    
    printf("Enter a word: ");
    while( ch != '\n'){
        scanf("%c", &ch);
        switch (toupper(ch)) {
                
            case 'D': case 'G':
                sum += 2; break;
            case 'B': case 'C': case 'M': case 'P':
                sum += 3; break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                sum += 4; break;
            case 'K':
                sum += 5; break;
            case 'J': case 'X':
                sum += 8; break;
            case 'Q': case 'Z':
                sum += 10; break;
                
            default:
                sum++; break;
        }
    }
    
    printf("Scrabble value: %d", sum);
    
    return 0;
}
