#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("chcp 1251");
    system("cls");
    double x, y, a, b, r, x0, y0;
    x0=7.33; y0=-21.1; r=23.5;
    printf("Введите координаты точки: "); scanf("%f%f" , &x, &y);
    a=x0-x; b=y0-y;
    if ((a*a+b*b)<=(r*r)) {
        printf("Точка принадлежит кругу");
    }
    else printf("Точка не принадлежит кругу");
}
