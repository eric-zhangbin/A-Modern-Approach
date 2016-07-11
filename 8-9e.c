#include <stdio.h>

int main(void){
    
    float temperature_readings[24][30];
    int d = 0.0, h = 0.0;
    
    for (h = 0; h < 24; h++) {
        for (d = 0; d < 30; d++) {
            temperature_readings[h][d] = 1.0;
            printf(" %.1f", temperature_readings[h][d]);
        }
        printf("\n");
    }
    
    printf("\nhour!\n");
    
    for (h = 0; h < 24; h++) {
        float sum_h = 0.0;
        for (d = 0; d < 24; d++) {
            sum_h += temperature_readings[h][d];
        }
        printf(" %.1f", sum_h / 24);
    }
    
    printf("\nday!\n");
    
    for (d = 0; d < 30; d++) {
        float sum_d = 0.0;
        for (h = 0; h < 24; h++) {
            sum_d += temperature_readings[h][d];
        }
        printf(" %.1f", sum_d / 24);
    }
    printf("\n");
    return 0;
}