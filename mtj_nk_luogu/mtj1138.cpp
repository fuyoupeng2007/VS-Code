#include<stdio.h>
int main() 
{
    int year,month,day,days=0,i;
    int mon1[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int mon2[]={31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d-%d-%d",&year,&month,&day);
    if (year%4!=0){
        for(i=0;i<month;i++) 
        days+=mon1[i];
        days+=day;
    } else {
        for(i=0;i<month;i++) 
        days+=mon2[i];
        days+=day;
    }
    printf("%d",days);

    return 0; 
}
