#include<stdio.h>
int main(void){
    int h[10];
    int i,l,t,cnt;
    cnt=0;
    for(i=0;i<=9;i++){
        scanf("%d",&h[i]);
    }
    scanf("%d",&l);
    t=l+30;
    for(i=0;i<10;i++){
        if(h[i]<t){
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}
