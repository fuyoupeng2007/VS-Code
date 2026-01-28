#include<stdio.h>
double *q(double n){
    double sumq=0.0;
	for(double i=1;i<=n;i+=2){
		sumq+=1.0/i;
	}
	return &sumq;
}

double *o(double n){
	double sumo=0.0;
	for(double i=2;i<=n;i+=2){
		sumo+=1.0/i;
	}
	return &sumo;
}
int main(void){
	int n;
	scanf("%d",&n);
	if(n%2==0){
		double *r=o(n);
		printf("%d",*r);
	} else{
		double *r=q(n);
		printf("%lf",*r);
	}
	
}
