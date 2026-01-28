#include<stdio.h>
int main(void){
    int cnt,a;
    cnt=0;
    scanf("%d",&a);
    for(;a>1;a/2)
        cnt++;
    printf("%d",cnt);
    return 0;
}
