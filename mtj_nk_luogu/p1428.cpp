#include<stdio.h>
int main(void){
    int f[100]={0};
    int cnt[100]={0};
    int n,i,j,k,m;
    scanf("%d",&n);
    for(i=0;i<=n-1;i++){
        scanf("%d",&f[i]);
    }
    for(j=0;j<=n-1;j++){
        for(k=0;k<=j-1;k++){
            if(f[j]>f[k]) 
                cnt[j]++;
        }
    }
    for(m=0;m<=n-1;m++)
        printf("%d ",cnt[m]);
    return 0;
}
