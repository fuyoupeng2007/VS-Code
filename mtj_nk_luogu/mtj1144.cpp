#include<stdio.h>
int main() 
{ 
    int num,sum,con;
    sum=0;
    scanf("%d",&con);
    num=con;
    for(;num!=0;num=num/10)
    sum+=num;
    if(con%sum==0){
        printf("YES");
    } else printf("NO");

    return 0; 
}
