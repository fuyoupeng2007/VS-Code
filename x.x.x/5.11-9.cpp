#include<stdio.h>
#define CONST 273.15

void temperatures(double h, double *s, double *k) {
    *s = 5.0/9.0*(h-32);
    *k = *s + CONST;
}

int main(void) {
    double h, s, k;
    
    while(scanf("%lf", &h) == 1) {
        temperatures(h, &s, &k);
        printf("摄氏温度为：%.2lf\n", s);
        printf("华氏温度为：%.2lf\n", h);
        printf("开氏温度为：%.2lf\n", k);
    }
    
    return 0;
}

