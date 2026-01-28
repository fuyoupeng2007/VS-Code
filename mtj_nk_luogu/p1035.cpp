#include<stdio.h>
int main(void){
    int k,sum,cnt;
    sum=0;
    cnt=0;
    scanf("%d",&k);
    for(double i=1.0;sum<=k;i++){
        sum+=1.0/i;
        cnt++;
    }
        printf("%d",cnt);
    return 0;
}
