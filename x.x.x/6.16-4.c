#include<stdio.h>
int main(void)
{
    char c;
    c='A';
    int hang;
    int lie;
    for(lie=1;lie<=6;lie++)
    {
        for(hang=0;hang<lie;hang++,c++)
        printf("%c",c);
        printf("\n");
    }
    return 0;
}