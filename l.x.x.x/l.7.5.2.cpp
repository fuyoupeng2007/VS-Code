#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define LENGTH 6
int main(void){
	int n;
	char s[LENGTH];
	printf("input a integer:");
	scanf("%d",&n);
	itoa(n,s,10);
	printf("string:%s\n",s);
}
