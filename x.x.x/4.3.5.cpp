#include<stdio.h>
judge(int n){
	int a,b,c;
	a=n/100;
	b=(n-100*a)/10;
	c=n-100*a-10*b;
	if(n==a*a*a+b*b*b+c*c*c) 
	printf("%d是水仙花数",n);
	else printf("%d不是水仙花数",n) ; 
}

int main(void){
	int n;
	scanf("%d",&n);
	judge(n);
	
	return 0;
}
