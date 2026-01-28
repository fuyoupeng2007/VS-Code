#include <stdio.h>
#include <math.h>

double f(double a, double x) {
    return a * x * x + sin(x);
}

double df(double a, double x) {
    return 2 * a * x + cos(x);
}

double newton(double a, double x0) {
    double x1;
    do {
        x1 = x0 - f(a, x0) / df(a, x0);
        if (fabs(x1 - x0) < 1e-6) break;
        x0 = x1;
    } while (1);
    return x1;
}

int main() {
    double a, b;
    scanf("%lf %lf", &a, &b);
    double root = newton(a, b);
    printf("方程在x=%lf附近的实根为：%lf\n", b, root);
    
    return 0;
}

