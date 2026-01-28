#include<stdio.h>
int main(void)
{
    int hang,lie;
    for(lie=1;lie<=5;lie++)
    {
        for(hang=1;hang<=lie;hang++)
        printf("$");
        printf("\n");
    }
    return 0;
}