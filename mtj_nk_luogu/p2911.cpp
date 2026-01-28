#include<stdio.h>
int main(void){
    int s1,s2,s3,max,n,m;
    max=0;
    int cnt[80]={0};
    scanf("%d %d %d",&s1,&s2,&s3);
    for(int i=1;i<=s1;i++){
        for(int j=1;j<=s2;j++){
            for(int k=1;k<=s3;k++){
                n=i+j+k;
                cnt[n]++;
            }
        }
    }
    for(m=3;m<=s1+s2+s3;m++){
        if(cnt[m]>max)
            max=cnt[m];
    }
    for(int g=3;g<=s1+s2+s3;g++)
        if(cnt[g]==max){
		
            printf("%d",g);
            break;
}
    return 0;
}
