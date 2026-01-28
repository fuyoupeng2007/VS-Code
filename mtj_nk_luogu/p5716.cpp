#include<stdio.h>
int main(void){
	 int y,mon;
    scanf("%d %d",&y,&mon);
    if((y%4==0 && y%100!=0) || y%400==0)
    {
    	int r[]={31,30,31,30,31,30,31,31,30,31,30,31};
    	printf("%d",r[mon-1]);
	}
	else {
		int r[]={31,28,31,30,31,30,31,31,30,31,30,31};
    	printf("%d",r[mon-1]);
	}
}
