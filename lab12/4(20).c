#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main()
{
    system("chcp 1251");
    system("cls");
    char x[200],y[200];
    char *z=x;
    int i=0, s=0;
    printf("������� �����: ");
    gets(x);
    printf("������� ��������: ");
    gets(y);
    while ((z=strstr(z,y))!=NULL)
    {
        s++;
        z++;
    }
    printf("���-��: %d", s);
    getch();
    return 0;
}
