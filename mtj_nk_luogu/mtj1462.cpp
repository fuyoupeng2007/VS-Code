#include<stdio.h>
int main() 
{ 
    char s1[80];
    char s2[80];
    char c;
    int i,j;
    i=0;
    j=0;
    while((c=getchar())!='\n'){
        s1[i]=c;
        i++;
    }
    for(;j<=i;j++){
        s2[j]=s1[j];
        printf("%c",s2[j]);
    }

    return 0; 
}
