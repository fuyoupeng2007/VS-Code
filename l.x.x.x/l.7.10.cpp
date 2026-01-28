#include<stdio.h>
#include<string.h>
char *delnum(char *s);
int main(void){
	char string[80];
	printf("input string:\n");
	gets(string);
	puts(delnum(string));
}
char *delnum(char *s){
	int i;
	char *temp=s;
	for(i=0;s[i]!='\0';){
		if(s[i]>='0'&&s[i]<='9')
		strcpy(s,s+1);
		else s++;
	}
	return temp;
}
