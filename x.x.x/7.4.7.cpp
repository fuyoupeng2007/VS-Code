#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 3
void input(char (*p)[80],int n);
void sort0(char (*p)[80],int n);
void sort1(char (*p)[80],int n);
void output(char (*p)[80],int n);
int main(void){
	char str[N][80];
	input(str,N);
	int n=0;
	scanf("%d",&n);
	getchar();
	if(n==0) sort0(str,N);
	else sort1(str,N);
	output(str,N); 
}

void input(char (*p)[80],int n){
	for(int i=0;i<n;i++){
		gets(p[i]);
	}
}
void sort0(char (*p)[80],int n){
	 char *temp; 
	 int num1,num2;
	for(int i=0;i<n;i++){
	   for(int j=0;j<n-i-1;j++){
	   	num1=atoi(p[j]);
		num2=atoi(p[j+1]);
		   if(num1>num2){
		   	strcpy(temp,p[j]); 
			strcpy(p[j],p[j+1]);
			strcpy(p[j+1],p[j]); 
		   } 
	   }
	}
}

void sort1(char (*p)[80],int n){
	char temp[80];
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1-i;j++){
			if(strcmp(p[j],p[j+1])>0){
				strcpy(temp,p[j]); 
				strcpy(p[j],p[j+1]);
				strcpy(p[j+1],temp); 
			}
		}
	}
}

void output(char (*p)[80],int n){
	for(int i=0;i<n;i++){
		puts(p[i]); 
	}
}





