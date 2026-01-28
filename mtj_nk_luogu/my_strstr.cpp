#include<stdio.h>
#include<string.h>
char *my_strstr(const char *s1,const char *s2){
	if(*s2=='\0'){
		return (char *)s1;
	}
	
	const char *p1,*p2,*start;
	
	for(start =s1;*start!='\0';start++){
		p1=start;
		
		p2=s2;
		while(*p1!='\0'&& *p2 !='\0' && *p1==*p2){
			p1++;
			p2++;
		}
		if(*p2=='\0'){
			return(char *)start;
		}
	}
	
	return NULL;
}

int main(void){
	
}
