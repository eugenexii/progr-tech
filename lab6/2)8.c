#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

double f(int);
int main()
{
    system("chcp 1251");
    system("cls");
    int n;
    printf("������� �������� ���������: ");
    scanf("%d", &n);
    printf("\n�����    : %g ", f(n));
    printf("\n�������� : %g", 1+2*sqrt(3)*sin(M_PI/9));
    getch();
    return 0;
}

double f(int x)
{
    return (x==1)?sqrt(8-sqrt(8+sqrt(8))):sqrt(8-sqrt(8+sqrt(8-f(x-1))));
}
