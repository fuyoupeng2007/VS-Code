#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void del(char *s,char *p);
int main(void){
	char str[20],*p;
	printf("Enter a string:\n");
	gets(str);
	if((p=(char *)malloc(strlen(str)+1))==NULL){
		printf("\n not enough memory to allocate buffer!");
		exit(1);
	} 
	del(str,p);
	strcpy(str,p);
	free(p);
	printf("%s\n",str);
}

void del(char *s,char *p){
	while(*s&&*s=='*'){
		*p=*s;
		p++;
		s++;
	}
	while(*s){
		if(*s!='*'){
			*p=*s;
			p++;
		}
		s++;
	}
	*p='\0';
} 
