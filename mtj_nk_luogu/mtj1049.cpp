#include<stdio.h>
int main() 
{ 
    int x1,y1,x2,y2,x3,y3;
    double S1;
    scanf("%1d %1d %1d %1d %1d %1d",&x1,&y1,&x2,&y2,&x3,&y3);
    S1=(1.0/2.0)*(x1*y2+x2*y3+x3*y1-x1*y3-x2*y1-x3*y2);
    if(S1>=0){
        printf("%.2lf",S1);
    } else {
         printf("%.2lf",-S1);
    }
    return 0; 
}
