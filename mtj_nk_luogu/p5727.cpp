#include<stdio.h>
int main(void){
    int a,i;
    int cnt[100]={0};
    scanf("%d",&cnt[0]);
    a=cnt[0];
    i=1;
    while(1){
        if(a==1) break;
        else if(a%2==0){
            a/=2;
            cnt[i]=a;
            i++;
        }
        else {
            a=a*3+1;
            cnt[i]=a;
            i++;
        }  
    }
    for(int j=i-1;j>=0;j--)
    printf("%d ",cnt[j]);
    return 0;
}
