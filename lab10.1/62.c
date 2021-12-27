#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    system("chcp 1251");
    system("cls");
    srand(time(NULL));
    int i, j, s=0, *a, M;
    printf("Введите размерность массива: ");
    scanf("%d", &M);
    a=(int *)calloc(M,sizeof(int));
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
    printf("\nКоличество чисел, входящих в массив больше одного раза: %d", s);
    getch();
    return 0;
}
