#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("chcp 1251");
    system("cls");
    char x[20];
    int i=0, n=0;
    printf("������� �����: ");
    gets(x);
    for (i;x[i]!=0;i++)
    {
        if ((x[i]=='�')&&(i%2==1)&&(x[i-1]=='�'))
        {
            n=n+1;
            printf("��");
        }
    }
    if (n==0) printf("���");
    return 0;
}
