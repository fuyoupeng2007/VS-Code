#include<stdio.h>
int yue(int a,int b);
int bei(int a,int b);

int main(void){
	int a,b,m,n;
	scanf("%d %d",&a,&b);
	m=yue(a,b);
	n=bei(a,b);
	printf("最大公约数是：%d,最小公倍数是：%d",m,n);
	
	return 0; 
}

int yue(int a,int b){
	if(a<b){
		for(int i=2;i<=a;i++){
			if(a%i==0 && b%i==0)
			return i;
		}
		return 1;
	}
	else {
		for(int i=2;i<=b;i++){
			if(a%i==0 && b%i==0)
			return i;
		}
		return 1;
	}
}

int bei(int a,int b){
	if(a<b){
		for(int i=b+1;;i++){
			if(i%a==0 && i%b==0)
			return i;
		}
	}
	else {
		for(int i=a+1;;i++){
			if(i%a==0 && i%b==0)
			return i;
		}
	}
}








