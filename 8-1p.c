#include <stdio.h>
#include <stdbool.h>
#define N 10

int main(void){
    
    int n, digit;
    bool digit_seen[N] = {false};
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("Repeated digit(s):");
    
    while (n > 0) {
        digit = n % 10;
        if(digit_seen[digit])
            printf("%2d", digit);
        digit_seen[digit] = true;
        n /= 10;
    }
    return 0;
}