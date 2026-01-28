#include<stdio.h>
#include<string.h>
int main() 
{ 
    char ch[80]={0};
    int n;
    scanf("%s",ch);
    int c,i;
    while((c=getchar())!='\n');
    scanf("%d",&n);
    int len=strlen(ch);
    int l=len%n;
    for(i=0;i<=(len-l);i+=3){
        printf("%c%c%c\n",ch[i],ch[i+1],ch[i+2]);
    }
    for(;i<len;i++){
    printf("%c",ch[i]);
    }
    return 0; 
}
