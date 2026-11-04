#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main() {
    double x, y = 0.869e-2, z = -0.13e3;
    double d, first, h;

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    printf("Введите x: ");
    scanf("%lf", &x);

    d = fabs(y - x);
    first = (pow(x, y + 1) + exp(y - 1)) / (1 + x * fabs(y - tan(z)));
    h = first * (1 + d) + pow(d, 2) / 2 - pow(d, 3) / 3;

    printf("\nx = %g\n", x);
    printf("y = %g\n", y);
    printf("z = %g\n", z);
    printf("h = %.5f\n", h);

    system("pause");
    return 0;
}
