#include<stdio.h>
#define LETTER 1
int main(void){
    char c,str[20]="C Language";
    int i=0;
    while((c=str[i])!='\0'){
        i++;
        #if LETTER
        if(c>='a'&&c<='z'){
            c=c-32; 
        };
        #else
        if(c>='A'&&c<='Z'){
            c=c+32; 
        };
        #endif
        printf("%c",c);

    }
}