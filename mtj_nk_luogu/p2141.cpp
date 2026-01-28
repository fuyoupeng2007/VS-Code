#include<stdio.h>
int main(void){
    int n,i,cnt;
    cnt=0;
    int nu[100]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&nu[i]);
    }
    for(int j=0;j<n;j++){
        for(int k=0;k<n;k++){
            for(int m=k+1;m<n;m++)
                if(nu[m]+nu[k]==nu[j])
                    cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}
