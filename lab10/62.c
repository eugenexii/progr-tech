#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define M 20

int main()
{
    system("chcp 1251");
    system("cls");
    srand(time(NULL));
    int i, j, s=0, a[M];
    for (i=0; i<M; i++)
    {
        a[i]=rand()%(21)-10;
        printf("%d ", a[i]);
    }
    for (i=0; i<M; i++)
    {
        for (j=0; j<M; j++)
        {
            if((a[i]==a[j])&&(i!=j))
            {
               s++;
            }

        }
    }
    printf("\n���������� �����, �������� � ������ ������ ������ ����: %d", s);
    getch();
    return 0;
}
