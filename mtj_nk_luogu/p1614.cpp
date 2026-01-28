#include<stdio.h>
int main(void){
    int n,m,min,sum;
    min=1000;
    sum=0;
    int a[100]={0};
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int j=0;j<n-m;j++){
    	sum=0;
        for(int k=j;k<m+j;k++){
            sum+=a[k];
        }
        if(sum<=min)
            min=sum;
    }
    printf("%d",min);

    return 0;
}
