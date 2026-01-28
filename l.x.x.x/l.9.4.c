#include <stdio.h>
#include <stdlib.h>
// 替换 getch() 为跨平台的 getchar()
// #include <conio.h>

struct stu
{
    char name[10];
    int num;
    int age;
    char addr[15];
};

int main()
{
    char ch;
    int i;
    struct stu boya[2], boyb[2], *pp, *qq;
    FILE *fp;

    pp = boya;
    qq = boyb;

    // 写入文本文件
    if ((fp = fopen("stu_list.txt", "w+")) == NULL)
    {
        printf("不能打开文件，任意键退出！");
        getchar();
        exit(1);
    }

    printf("\ninput data\n");
    for (i = 0; i < 2; i++, pp++)
    {
        scanf("%s %d %d %s", pp->name, &pp->num, &pp->age, pp->addr);
    }

    pp = boya;
    for (i = 0; i < 2; i++, pp++)
    {
        fprintf(fp, "%s %d %d %s\n", pp->name, pp->num, pp->age, pp->addr);
    }
    fclose(fp);

    // 读取文本文件
    if ((fp = fopen("stu_list.txt", "r")) == NULL)
    {
        printf("不能打开文件，任意键退出！");
        getchar();
        exit(1);
    }

    rewind(fp);
    for (i = 0; i < 2; i++, qq++)
    {
        fscanf(fp, "%s %d %d %s", qq->name, &qq->num, &qq->age, qq->addr);
    }

    printf("\nname\tnumber\tage\taddr\n");
    qq = boyb;
    for (i = 0; i < 2; i++, qq++)
    {
        printf("%s\t%d\t%d\t%s\n", qq->name, qq->num, qq->age, qq->addr);
    }
    fclose(fp);

    // 写入二进制文件
    if ((fp = fopen("stu_list.dat", "wb+")) == NULL)
    {
        printf("不能打开文件，任意键退出！");
        getchar();
        exit(1);
    }

    pp = boya;
    qq = boyb;
    fwrite(pp, sizeof(struct stu), 2, fp);
    fclose(fp);

    // 读取二进制文件
    if ((fp = fopen("stu_list.dat", "rb")) == NULL)
    {
        printf("不能打开文件，任意键退出！");
        getchar();
        exit(1);
    }

    rewind(fp);
    fread(qq, sizeof(struct stu), 2, fp);

    printf("\nname\tnumber\tage\taddr\n");
    qq = boyb;
    for (i = 0; i < 2; i++, qq++)
    {
        printf("%s\t%d\t%d\t%s\n", qq->name, qq->num, qq->age, qq->addr);
    }
    fclose(fp);

    printf("\n按任意键结束...");
    getchar();
    getchar(); // 等待输入，避免程序直接退出
    return 0;
}