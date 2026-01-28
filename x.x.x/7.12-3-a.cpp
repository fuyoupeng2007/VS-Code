#include<stdio.h>
int main(void)
{
    int a, count = 0;
    int o = 0, j = 0;
    int sumo = 0, sumj = 0;
    
    printf("输入数字(0结束):");
    while(scanf("%d", &a) == 1 && a != 0)  // 改用scanf读取整数
    {
        if(a%2 == 0) {
            o++;
            sumo += a;
        }
        else {
            j++;
            sumj += a;
        }
        count++;
    }

    double averageou = (o > 0) ? (double)sumo/o : 0;
    double averageji = (j > 0) ? (double)sumj/j : 0;
    
    printf("偶数出现 %d 次\n奇数出现 %d 次\n", o, j);
    printf("偶数平均值: %.2lf\n奇数平均值: %.2lf\n", averageou, averageji);
    
    return 0;
}

