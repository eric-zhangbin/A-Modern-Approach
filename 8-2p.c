#include <stdio.h>
#include <stdbool.h>
#define N 10

int main(void){
    
    int n, digit, i = 0;
    bool digit_seen[N] = {false};
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("Digit:\t");
    for (i = 0; i < 10; i++) {
        printf("\t%d", i);
    }
    printf("\n");
    
    printf("Occurrences:   ");
    for (i = 0; i < N; i++) {
        int k = n, j = 0;
        while (k > 0) {
            digit = k % 10;
            if(digit == i)
                j++;
            k /= 10;
        }
        printf("%d\t", j);
    }
    
    return 0;
}