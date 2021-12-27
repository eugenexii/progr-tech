#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

float Plo(float, float, float);
float dlina(float, float, float, float);
int main()
{
    system("chcp 1251");
    system("cls");
    float x, y, x1, y1, x2, y2, x3, y3;
    float ab, bc, ac, s, s1, s2, s3, h1, h2, h3, min;
    printf("Введите координаты вершины A треугольника: ");
    scanf("%f %f", &x, &y);
    printf("Введите координаты вершины B треугольника: ");
    scanf("%f %f", &x1, &y1);
    printf("Введите координаты вершины C треугольника: ");
    scanf("%f %f", &x2, &y2);
    ab=dlina(x,y,x1,y1);
    bc=dlina(x1,y1,x2,y2);
    ac=dlina(x,y,x2,y2);
    s=Plo(ab,bc,ac);
    printf("\nВведите координаты точки: ");
    scanf("%f %f", &x3, &y3);
    s1=Plo((dlina(x3,y3,x,y)), (dlina(x3,y3,x1,y1)), ab);
    s2=Plo((dlina(x3,y3,x1,y1)), (dlina(x3,y3,x2,y2)), bc);
    s3=Plo((dlina(x3,y3,x,y)), (dlina(x3,y3,x2,y2)), ac);
    h1=s1/ab*2;
    h2=s2/bc*2;
    h3=s3/ac*2;
    if (h1<h2) min=h1;
    else min=h2;
    if (h3<min) min=h3;
    if (min==h1)
    printf("\nБлижайшая сторона к точке - AB");
    if (min==h2)
    printf("\nБлижайшая сторона к точке - BC");
    if (min==h3)
    printf("\nБлижайшая сторона к точке - AC");
    getch();
    return 0;
}

float Plo(float x, float y, float z)
{
    float p, s;
    p=(x+y+z)/2.0;
    s=sqrt(abs(p*(p-x)*(p-y)*(p-z)));
    return s;
}

float dlina(float n, float m, float n1, float m1)
{
    return sqrt(abs((n1-n)*(n1-n)+(m1-m)*(m1-m)));
}
