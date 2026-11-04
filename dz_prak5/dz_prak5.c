#define _CRT_SECURE_NO_DEPRECATE
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

#define Y 0.869e-2
#define Z -0.13e3

int main() {
    setlocale(LC_ALL, ".UTF8");
    double x, h;

   

    puts("Введите x:");
    scanf("%lf", &x);

    h = (pow(x, Y + 1) + exp(Y - 1)) / (1 + x * fabs(Y - tan(Z))) * (1 + fabs(Y - x))
        + pow(fabs(Y - x), 2) / 2 - pow(fabs(Y - x), 3) / 3;

    printf("При x = %.3f, y = %g, z = %g значение h = %.5f\n", x, Y, Z, h);

    system("pause");
    return 0;
}