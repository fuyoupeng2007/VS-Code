#include<stdio.h>
int main() 
{ 
    int n,i;
    scanf("%d",&n);
    int ch[100]={0};
    for( i=0;i<n;i++){
        scanf("%d",&ch[i]);
		}
        for(int j=0;j<n-1;j++){
            for(int k=0;k<n-1-j;k++){
                if(ch[k]>ch[k+1]){
                    int temp=ch[k];
                    ch[k]=ch[k+1];
                    ch[k+1]=temp;
                }
            }
        }
        for(int a=0;a<n;a++){
            printf("%d ",ch[a]);
        }

    return 0; 
}
