#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 2
union Career{
    int class;
    char pozition[10];
};
struct Data{
    int num;
    char name[20];
    char sex;
    char job;
    union Career category;
};

int main(){
    struct Data person[N];
    int n,i;
    for(n=0;n<N;n++){
        printf("Please input the num:");
        scanf("%d",&person[n].num);
        printf("Please input the name:");
        scanf("%s",person[n].name);
        printf("Please input the sex(M/F):");
        scanf(" %c",&person[n].sex);
        printf("Please input the job(S/T):");
        scanf(" %c",&person[n].job);
        if(person[n].job=='S'){
            printf("Please input the class:");
            scanf("%d",&person[n].category.class);
        }
        else if(person[n].job=='T'){
            printf("Please input the pozition:");
            scanf("%s",person[n].category.pozition);
        }
        else printf("Input error!\n");
    }
    printf("\n");
    printf("No.\tName\tSex\tJob\tClass/Position\n");
    for(i=0;i<n;i++){
        printf("%d\t%s\t%c\t%c\t",person[i].num,person[i].name,person[i].sex,person[i].job);
        if(person[i].job=='S'){
            printf("Class %d\n",person[i].category.class);
        }
        else if(person[i].job=='T'){
            printf("Pozition %s\n",person[i].category.pozition);
        };
    }
    return 0;
}