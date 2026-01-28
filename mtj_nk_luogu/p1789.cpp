#include<stdio.h>
int main(void){
    int n,m,k,cnt;
    cnt=0;
    scanf("%d %d %d",&n,&m,&k);
    int s[n][n]={0};
    int i,j,a;
    i=0;
    j=0;
    for(a=1;a<=m;a++){
        scanf("%d %d",&i,&j);
        s[i][j]=1;
        s[i][j-1]=1;
        s[i][j-2]=1;
        s[i][j+1]=1;
        s[i][j+2]=1;
        s[i-1][j]=1;
        s[i-2][j]=1;
        s[i+1][j]=1;
        s[i+2][j]=1;
    }
    for(int b=0;b<k;b++){
        scanf("%d %d",&i,&j);
        for(int c=i-2;c<=i+2;c++){
            for(int d=j-2;d<=j+2;d++){
                s[c][d]=1;
            }
        }
    }
    for(int e=0;e<n;e++){
        for(int f=0;f<n;f++){
            if(s[e][f]==0)
                cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}
