#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define M 5


int main()
{
    system("chcp 1251");
    system("cls");
    srand(time(NULL));
    int i, j, k, l, trigger = 0, r = 0;
    int m[M][M];
    for (i = 0; i<M; i++)
    {
        for (j = 0; j<M; j++)
        {
            m[i][j]=rand()%101-50;
            printf("%4d ", m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (i = 0; i<M; i++)
    {
        for (j = 0; j<M; j++)
        {
            for(k=i==0?i:i-1; k<=i+1&&k<M&&trigger==0; k++)
            {
                for(l=j==0?j:j-1; l<=j+1&&l<M&&trigger==0; l++)
                {
                    if (m[i][j]>m[k][l])
                    {
                        trigger=1;
                    }
                }
            }
            if (trigger==0)
            {
                printf("  локальный минимум: %d [%d][%d]\n", m[i][j], i, j);
                r++;
            }
            trigger=0;
        }
    }
    printf("\n  Количество локальных минимумов: %d ", r);
    getch();
    return 0;
}
