#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("chcp 1251");
    system("cls");
    char x[200],y[200];
    char *z=x;
    int i=0, s=0;
    gets(x);
    gets(y);
    while ((z=strstr(z,y))!=NULL)
    {
        z++;
        s++;
    }
    printf("Кол-во: %d", s);
    return 0;
}
