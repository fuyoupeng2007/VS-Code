#include<stdio.h>

int f(int a){
	int s =0;
	for(int i=1;i<4;i++){
		if(a%10==5) s=1;
	}
	return s;
}
int main(void){
	int a;
	a=1;
	for(;a<1000;a++){
		if(a%3==0 && f(a))
		printf("%d ",a);
	}
	return 0;
}
