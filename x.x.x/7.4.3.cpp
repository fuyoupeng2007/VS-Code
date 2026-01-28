#include<stdio.h>
#include<string.h>
int fun(char *str);
int main(void){
	char str[80]={0};
	gets(str);
	if(fun(str))
	printf("YES");
	else printf("NO");
}

int fun(char *str){
	int l=strlen(str);
	int i=0;
	char *pb=str;
	char *pe=str+l-1;
	if(l%2==0){
		for(i=0;i<(l/2);i++){
			if(*pb!=*pe){
				return 0;
			}
			else {
				pb++;
				pe--;
			}
		}
	}
	else {
		for(i=0;i<((l-1)/2);i++){
			if(*pb!=*pe){
				return 0;
			}
			else {
				pb++;
				pe--;
			}
		}
	}
	return 1;
}






