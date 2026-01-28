#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void sort(char **str,int n);
int main(void){
	int i;
	char *str[10]={NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL};
	char temp[100];
	for(i=0;i<10;i++){
		gets(temp);
		str[i]=(char*)malloc(strlen(temp)+1);
		if(str[i]==NULL){
			printf("not enough memory to allocte buffer.\n");
			exit; 
		}
		strcpy(str[i],temp);
	}
	sort(str,10);
	for(i=0;i<10;i++){
		if(str[i]!=NULL)
		free(str[i]); 
	}
}
void sort(char **str,int n){
	int i,j;
	char *p;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
		if(strcmp(str[j],str[j+1])>=0){
			p=str[j];
			str[j]=str[j+1];
			str[j+1]=p;
	    	}
     	}
	} 
} 












