#include <stdio.h>
#define green 3
#define red 2

main()
{
    system("chcp 1251");
    system("cls");
    float t;
    printf("������� t: ");
    scanf("%f", &t);
    if ((int)t%5>red) printf("����� ������� ������");
    else printf("����� ������� ������");
    return 0;
}
