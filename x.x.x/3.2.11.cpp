#include<stdio.h>
int main(void){
	int a,b,m,n,i;
	m=1;
	n=10000;
	scanf("%d %d",&a,&b);
	if(a<b){
	for(i=2;i<=a;i++){
		if(a%i==0){
			if(b%i==0)
			m=i;
		}
	}
	printf("最大公约数是%d\n",m);
	
	
	for(n=b;n<10000;n++){
		if(n%b==0){
			if(n%a==0){
			printf("最小公倍数是%d\n",n);
			break;}
		}
	}
}
	else{
	for(i=2;i<=b;i++){
		if(a%i==0){
			if(b%i==0)
			m=i;
		}
	}
	printf("最大公约数是%d",m);
	
	
	for(n=a;n<10000;n++){
		if(n%a==0){
			if(n%b==0)
			printf("最小公倍数是%d",n);
			break;
		}
	}
}

}
