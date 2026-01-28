#include<stdio.h>
#define CONST 12
int main() 
{
    int a,b,sum,yu;
    scanf("%d %d",&a,&b);
    sum=a+b;
    yu=sum%CONST;
    printf("%3d",yu);
    return 0; 
}
