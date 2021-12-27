#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("chcp 1251");
    system("cls");
    char x[200];
    int i=0, s=1;
    gets(x);
    for (i;x[i]!=0;i++)
    {
        if (x[i]==' ') s+=1;
    }
    printf("Кол-во слов: %d", s);
    return 0;
}
