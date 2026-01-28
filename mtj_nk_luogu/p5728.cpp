#include<stdio.h>
#include<math.h>
int main(void){
    int g1[1000]={0};
    int g2[1000]={0};
    int g3[1000]={0};
    int sum[1000]={0};
    int n,i,cnt;
    cnt=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d %d",&g1[i],&g2[i],&g3[i]);
        sum[i]=g1[i]+g2[i]+g3[i];
    }
    for(int k=0;k<n;k++){
        for(int j=k+1;j<n;j++){
           if (abs(g1[k] - g1[j]) <= 5 &&    // 第1门成绩差≤5
                abs(g2[k] - g2[j]) <= 5 &&    // 第2门成绩差≤5
                abs(g3[k] - g3[j]) <= 5 &&    // 第3门成绩差≤5
                abs(sum[k] - sum[j]) <= 10) 
                cnt++;          
        }
    }
    printf("%d",cnt);
    return 0;
}

