#include<stdio.h>
int main(void)
{
    char c;
    int hang;
    int lie;
    for(lie=1;lie<=6;lie++)
    {
        for(hang=0,c='F';hang<lie;hang++,c--)
        printf("%c",c);
        printf("\n");
    }
    return 0;
}
