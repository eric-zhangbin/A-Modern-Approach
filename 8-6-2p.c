#include <stdio.h>
#include <ctype.h>
#define MSG_SIZE 100

int main(void)
{
    char message[MSG_SIZE] = {0};
    char ch;
    int i;
    
    printf("Enter a message: ");
    
    i = 0;
    while (( ch = getchar()) != '\n') {
        message[i] = toupper(ch);
        i++;
    }
    
    printf("In B1FF-speak:   ");
    
    i = 0;
    while (message[i]  != '\0') {
        switch (message[i]) {
            case 'A': message[i] = '4';
                break;
            case 'B': message[i] = '8';
                break;
            case 'E': message[i] = '3';
                break;
            case 'I': message[i] = '1';
                break;
            case 'O': message[i] = '0';
                break;
            case 'S': message[i] = '5';
                break;
        }
        putchar(message[i]);
        i++;
    }
    printf("!!!!!\n"); 
    
    return 0;
}