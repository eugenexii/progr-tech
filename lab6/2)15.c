#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

float Plo(float, float, float);
int main()
{
    system("chcp 1251");
    system("cls");
    float a, b, c, d;
    printf("Введите значения длин отрезков a b c d: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    printf("\nПлоащади треугольников: %g, %g, %g, %g", Plo(a,b,c), Plo(a,b,d), Plo(d,b,c), Plo(a,d,c));
}

float Plo(float x, float y, float z)
{
    float p, s;
    p=(x+y+z)/2.0;
    s=sqrt(p*(p-x)*(p-y)*(p-z));
    return s;
}
