#include<stdio.h>
int main(void){
    int x,n,r,l,sum,d;
    scanf("%d %d",&x,&n);
    r=n/7;
    l=n%7;
    d=5*r;
    int days[]={1,1,1,1,1,0,0};
    for(i=x,i<=x+l;i++){
        d+=days[i%7-1];
    }
    sum=d*250;
    return 0;
}
