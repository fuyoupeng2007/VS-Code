#include<stdio.h>
#include<math.h>
int main() 
{ 
    int x;
    scanf("%d",&x);
    printf("%d",pow(x,6)-2*pow(x,5)+3*pow(x,4)-5*x*x+6*x+7);
    return 0; 
}
