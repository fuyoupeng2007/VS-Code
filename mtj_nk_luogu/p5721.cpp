#include<stdio.h>
int main(void){
    int n,i,j,cnt;
    cnt=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n+1-i;++j){
        cnt++;
        if(cnt/10==0)
            printf("0%d",cnt);
        else printf("%d",cnt);
		}
		printf("\n");
    }
    return 0;
}
