#include<stdio.h>
#include<string.h>
int main(void){
	char str[80]={0};
	char *pstr=str;
	int cnt=0;
	int i=0;
	gets(str);
	while(*pstr!='\0'){
		cnt++;
		pstr++;
	}
	printf("%d\n",cnt);
	for(i=0,pstr=str;i<cnt;i++){
		printf("%c",*(pstr+i));
	}
	printf("\n");
	for(i=cnt,pstr=str;i>=0;i--)
	printf("%c",*(pstr+i));\
}
