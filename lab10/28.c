#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#define M 10

int main()
{
    system("chcp 1251");
    system("cls");
    srand(time(NULL));
    int i, x=0, y=0, a[M];
    for (i=0;i<M;i++)
    {
        a[i]=rand()%10;
        printf("%d ", a[i]);
        if (a[i]>=x) x=a[i];
            else if (a[i]>=y) y=a[i];
    }
    printf("\n���������� �������� �������: %d � %d. �� ������������: %d", x, y, x*y);
    getch();
    return 0;
}
