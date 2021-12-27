#include <stdio.h>
#define green 3
#define red 2

main()
{
    system("chcp 1251");
    system("cls");
    float t;
    printf("Введите t: ");
    scanf("%f", &t);
    if ((int)t%5>red) printf("Горит красный сигнал");
    else printf("Горит зеленый сигнал");
    return 0;
}
