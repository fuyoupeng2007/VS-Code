#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void bushi(int a,int b,int c,int n){
	int x1,x2;
	x1=(-b+n)/(2*a);
	x2=(-b-n)/(2*a);
	printf("x1=%d x2=%d",x1,x2);
	
}
void shi(int a,int b,int c,int n){
	int x1,x2;
	x1=(-b)/(2*a);
	x2=(-b)/(2*a);
	printf("x1=x2=%d",x1);
	
}
void xu(int a,int b,int c,int n){
	int x1,x2;
	if(b!=0) {
	printf("x1=-%d+%di ",b/(2*a),n/(2*a));
	printf("x2=-%d-%di",b/(2*a),n/(2*a));
	} else{
		printf("x1=%di ",n/(2*a));
	    printf("x2=-%di",n/(2*a));
	}
	
}
int main(void){
	int n,m,a,b,c;
	scanf("%d %d %d",&a,&b,&c) ;
	m=b*b-4*a*c;
	n=sqrt(abs(m));
	if(m>0){
		bushi(a,b,c,n);
	}
	else if(m==0){
		shi(a,b,c,n);
	}
	else xu(a,b,c,n);
	
	return 0;
	
}
