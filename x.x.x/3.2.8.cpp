#include<stdio.h>
int main(void){
	int a;
	int n[6]={0};
	scanf("%d",&a);
	for(int i=1;;i++){
		if(a==0){
		 printf("%d\n",i-1);
		 break;
		 }
		n[i-1]=a%10;
		a/=10;
	}
	for(int j=5;j>=0;j--){
		if(n[j]!=0) printf("%d ",n[j]);
	}
		for(int j=0;j<=5;j++){
		if(n[j]!=0) printf("%d",n[j]);
	}
	return 0;
}
