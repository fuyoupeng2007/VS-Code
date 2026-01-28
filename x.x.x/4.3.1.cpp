#include<stdio.h>
squSum(int &a,int &b){
	printf("%d",a*a+b*b);
}

int main(void){
	int a,b;
	scanf("%d %d",&a,&b);
	squSum(a,b);
}
