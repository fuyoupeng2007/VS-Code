#include<stdio.h>
int main(void){
	int a=1;
	int n=1;
	for(;a<=10;a++){
		for(int i=1;i<=a;i++){
			n*=i;
		}
		printf("%d\n",n);
		n=1;
	}
	
	return 0;
}
