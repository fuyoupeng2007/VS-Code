#include<stdio.h>
int main() 
{ 
    int a;
    scanf("%d",&a);
    if(a<10){
        printf("%d小于10",a);
    } else if(a==10){
        printf("%d等于10",a);
    } else {
        printf("%d大于10",a);
    }
    return 0; 
}
