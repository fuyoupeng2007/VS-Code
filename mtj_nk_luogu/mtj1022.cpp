#include<stdio.h>
int main() 
{ 
    double a,b;
    a=3.1415926;
    b=12345678.123456789;
    printf("%0.6lf %0.3e\n%0.6lf %0.3e",a,a,b,b);
    return 0; 
}
