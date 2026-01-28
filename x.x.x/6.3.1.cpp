#include<stdio.h>
int main(void){
	int a[10],*pa,i;
	for(i=0;i<10;i++)
	a[i]=i+1;
	pa=a;
	for(i=0;i<10;i++)
	printf("*(pa+%d):%d\n",i,*(pa+i));
	
	return 0;
}
