#include<string.h>
int main() 
{ 
    char str[100];
    int a;
	scanf("%d\n",&a);
    fgets(str,sizeof(str),stdin);
    size_t len = strlen(str);
    if(len > 0 && str[len-1]=='\n'){
        str[len-1]='\0';
    }
    fputs(str,stdout);
    printf("\n");
    return 0;
    
}
