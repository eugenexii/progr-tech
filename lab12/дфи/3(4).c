#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("chcp 1251");
    system("cls");
    char x[20];
    int i=0, n=0;
    printf("Введите слово: ");
    gets(x);
    for (i;x[i]!=0;i++)
    {
        if ((x[i]=='к')&&(i%2==1)&&(x[i-1]=='и'))
        {
            n=n+1;
            printf("ДА");
        }
    }
    if (n==0) printf("нет");
    return 0;
}
