#include <stdio.h>
#include <string.h>

int main() { 
    char ch[1000];
    char *p1, *p2;
    int max=1;
    int cnt=0;
    fgets(ch, sizeof(ch), stdin);
    int len = strlen(ch);
    if (len > 0 && ch[len-1] == '\n') {
        ch[len-1] = '\0';  
        len--; 
    }
    p1=ch;
    p2=p1+1;
    for(int i=0;i<len;i++){
        cnt=0;
        while(*p2==*p1){
            cnt++;
            p2++;
            if(cnt>max)
            max=cnt;
        }
        p1++;
    }
    printf("%d",max);
    return 0; 
}
