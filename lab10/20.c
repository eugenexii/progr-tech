#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#define M 20

int main()
{
    system("chcp 1251");
    system("cls");
    srand(time(NULL));
    int i, s=0, a[M];
    for (i=0; i<M; i++)
    {
        a[i]=rand()%(21)-10;
        printf("%d ", a[i]);
        s+=a[i];
    }
    if (s%2==0) printf("\nСумма эл-ов массива (%d) является четным числом", s);
    else printf("\nСумма эл-ов массива (%d) не является четным числом", s);
}
