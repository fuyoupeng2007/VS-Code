#include<stdio.h>
isprime(int a){
	int j=1;
	for(int i=2;i<a;i++){
		if(a%i==0){
			j=0;
		}
	}
	if(j==1){
		printf("%d是素数",a);
	}
	else printf("%d不是素数",a);
}
int main (void){
	int a;
	scanf("%d",&a);
	isprime(a);
	
	return 0;
}
