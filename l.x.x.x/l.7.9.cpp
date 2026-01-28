#include<stdio.h>
#include<string.h>
char *strchr1(char *str,char ch);
int main(void){
	char *string="this is a string";
	char *pstr,ch='s';
	pstr=strchr1(string,ch);
	if(pstr)
	printf("the character %c is at the position:%d\n",ch,pstr-string+1);
	else
	printf("the character %c not found\n",ch);
}

char *strchr1(char *str,char ch){
	char *temp=NULL;
	for(;*str!='\0';str++)
	if(*str==ch){
		temp =str;
		break;
	}
	return temp;
}
