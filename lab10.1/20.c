#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main()
{
    system("chcp 1251");
    system("cls");
    srand(time(NULL));
    int i, s=0, *a, M;
    printf("������� ����������� �������: ");
    scanf("%d", &M);
    a=(int *)calloc(M,sizeof(int));
    for (i=0; i<M; i++)
    {
        a[i]=rand()%(21)-10;
        printf("%d ", a[i]);
        s+=a[i];
    }
    if (s%2==0) printf("\n����� ��-�� ������� (%d) �������� ������ ������", s);
    else printf("\n����� ��-�� ������� (%d) �� �������� ������ ������", s);
}
