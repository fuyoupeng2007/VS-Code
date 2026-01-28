#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num); 
    int digits[10], len = 0;
    while (num > 0) {
        digits[len++] = num % 10;  
        num = num / 10;         
    }
    for (int i = len - 1; i >= 0; i--) {
        printf("%d ", digits[i]);
    }
    printf("\n");

    return 0;
}

