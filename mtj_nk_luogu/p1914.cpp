#include<stdio.h>
int main(void){
    int n;
    char c;
    scanf("%d",&n);
    while (getchar() != '\n');
    while((c=getchar())!='\n'){
        putchar(c+n);
    }   
    return 0;
}
