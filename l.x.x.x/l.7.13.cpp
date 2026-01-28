#include<stdio.h>
#include<string.h>
void inpstr(char (*p)[80],int n);
void sortstr(char (*p)[80],int n);
void outpstr(char (*p)[80],int n);
int main(void){
	char str[10][80];
	inpstr(str,10);
	sortstr(str,10);
	outpstr(str,10);
} 

void inpstr(char (*p)[80],int n){
	int i;
	for(i=0;i<n;i++)
	gets(p[i]); 
}

void sortstr(char (*p)[80],int n){
	int i,j;
	char temp[80];
	for(i=0;i<n-1;i++)
	for(j=i+1;j<n;j++)
	if(strcmp(p[i],p[j])>0){
		strcpy(temp,p[i]);
		strcpy(p[i],p[j]);
		strcpy(p[j],temp);
		 
	}
}

void outpstr(char(*p)[80],int n){
	int i;
	for(i=0;i<n;i++)
	puts(p[i]);
}
