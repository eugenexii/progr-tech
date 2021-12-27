#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    system("chcp 1251");
    system("cls");
    srand(time(NULL));
    int i, j, k, l, t=0, r=0, M;
    int **m;
    printf("¬ведите размерность массива: ");
    scanf("%d", &M);
    m=(int **)calloc(M,sizeof(int *));
    for(int i=0; i<M; i++)
    {
        m[i]=(int *)calloc(M,sizeof(int));
    }
    for(int i=0; i<M; i++)
    {
        for (j=0; j<M; j++)
        {
            m[i][j]=rand()%101-50;
            printf("%4d ", m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (i=0; i<M; i++)
    {
        for (j=0; j<M; j++)
        {
            for(k=i==0?i:i-1; k<=i+1&&k<M&&t==0; k++)
            {
                for(l=j==0?j:j-1; l<=j+1&&l<M&&t==0; l++)
                {
                    if (m[i][j]>m[k][l])
                    {
                        t=1;
                    }
                }
            }
            if (t==0)
            {
                printf("  локальный минимум: %d [%d][%d]\n", m[i][j], i, j);
                r++;
            }
            t=0;
        }
    }
    printf("\n   оличество локальных минимумов: %d ", r);
    getch();
    return 0;
}
