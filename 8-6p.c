#include <stdio.h>
#define N 40

int main(void)
{
    int i, num = 0;
    char msn[N], ch;
    
    printf("Enter message: ");
    
    while((ch = getchar()) != '\n'){
        msn[num] = ch;
        num++;
    }
    
    printf("\nIn B1FF-Speak: ");
    
    for (i = 0; i < num; i++) {
        
        if (msn[i] >= 'a' && msn[i] <= 'z'){
            
            msn[i] = msn[i] - 32;
            
            switch (msn[i]) {
                case 'A':
                    msn[i] = '4'; break;
                case 'I':
                    msn[i] = '1'; break;
                case 'S':
                    msn[i] = '5'; break;
                case 'O':
                    msn[i] = '0'; break;
                case 'E':
                    msn[i] = '3'; break;
                case 'B':
                    msn[i] = '8'; break;
                default:
                    msn[i] = msn[i];
            }
            
        }
        printf("%c", msn[i]);
    }
    
    printf("!!!!!!!!!!\n");
    
    return 0;
}