#include<stdio.h>
int main() 
{ 
    int n;
    char c;
    scanf("%d",&n);
    while((c=getchar())==' '|| c=='\n');
    putchar(c);
    while((c=getchar())!=' '&& c!='\n'){
        putchar(c);
    }
    return 0; 
}
