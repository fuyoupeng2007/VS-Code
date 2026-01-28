#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define wnum 3

void input(char (*p)[80],int n);
void sort(char (*p)[80],int n);
void output(char (*p)[80],int n);

int main(void){
	char str[wnum][80];
	input(str,wnum);
	sort(str,wnum);
	output(str,wnum); 
} 

void input(char (*p)[80],int n){
	for(int i=0;i<n;i++){
	while(**p!=' '){
		scanf("%c",*p);
		*p++;
		
	}
	p++;
	}
}
void sort(char (*p)[80],int n){
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
void output(char (*p)[80],int n){
	for(int i=0;i<n-1;i++){
		puts(p[i]); 
	}
}

