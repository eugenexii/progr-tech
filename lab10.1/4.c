#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main()
{
    system("chcp 1251");
    system("cls");
    srand(time(NULL));
    int i, p=0, o=0, n=0, *a, x;
    printf("������� ����������� �������: ");
    scanf("%d", &x);
    a=(int *)calloc(x,sizeof(int));
    for (i=0;i<x;i++)
    {
        a[i]=rand()%(21)-10;
        printf("%d ", a[i]);
        if (a[i]>0) p++;
        else if (a[i]==0) n++;
        else o++;
    }
    printf("\n�������������: %d \n�������������: %d\n�����: %d",p, o, n);
    getch();
    return 0;
}
