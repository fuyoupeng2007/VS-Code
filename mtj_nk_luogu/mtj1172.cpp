#include<stdio.h>
int main() 
{ 
    int num,sum1,sum;
    sum1=1;
    sum=1;
    scanf("%d", &num); 
    int digits[10], len = 0;
    while (num > 0) {
        digits[len++] = num % 10;  
        num = num / 10;         
    }
    for (int i = len - 1; i >= 0; i--) 
    {
        for(;digits[i]>=1;digits[i]--)
        sum1=sum1*digits[i];
        sum+=sum1;
    }
    return 0; 
}
