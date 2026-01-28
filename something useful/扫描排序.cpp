#include<stdio.h>
#define N 10

int main(void){
	int i,j,k;
	int a[N],t;
	for(i=0;i<N;i++){
		scanf("%d",&a[i]); 
	} 
	for(i=0;i<N-1;i++){
		j=i;
		for(k=i+1;k<N;k++){
			if(a[k]<a[j]) j=k;
		}
		if(j!=i){
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	for(i=0;i<N;i++){
		printf("%d\t",a[i]); 
	}
}
