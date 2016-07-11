/* Transfer Letter to Number */
#include <stdio.h>

int main(void){
    
    char ch;

    printf("Enter the phone number: ");
    
    while (ch != '\n') {
        scanf("%c", &ch);
        switch (ch) {
            case 'A':
            case 'B':
            case 'C':
                printf("2");
                break;
            case 'D':
            case 'E':
            case 'F':
                printf("3");
                break;
            case 'G':
            case 'H':
            case 'I':
                printf("4");
                break;
            case 'J':
            case 'K':
            case 'L':
                printf("5");
                break;
            case 'M':
            case 'N':
            case 'O':
                printf("6");
                break;
            case 'P':
            case 'Q':
            case 'R':
                printf("7");
                break;
            case 'S':
            case 'T':
            case 'U':
                printf("8");
                break;
            case 'V':
            case 'W':
            case 'X':
                printf("9");
                break;
                
            default:
                printf("%c", ch);
        }

    }
    
    return 0;
}
