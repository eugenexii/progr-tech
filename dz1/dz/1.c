#include <stdio.h>
#include <math.h>

int main()
{
    system("chcp 1251");
    system("cls");
    float x, y, z, q, a, b;
    printf("Введите x y: ");
    scanf("%f %f", &x, &y);
    if ((b==0)&&(x==0)) printf("\nНет решения");
    else
    {
        a=x+(2+y)/x*x;
        b=y+(1/sqrt(x*x+10));
        printf("\nОтвет: z = %f, ", a/b);
    }
    printf("q = %f", 2.8*sin(x)+abs(y));
    return 0;
}
