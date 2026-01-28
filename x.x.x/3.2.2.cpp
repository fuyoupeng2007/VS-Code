#include<stdio.h>
int main(void){
	int max=0;
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b) max=a;
	else max=b;
	if(a>c) max=a;
	else max=c;
	if(b>c) max=b;
	else max=c;

	printf("%d",max);
	
	return 0;
}
