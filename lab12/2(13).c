#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("chcp 1251");
    system("cls");
    char x[100],s[100];
    int n, i=0,j=0;
    printf("������� �����: ");
    gets(x);
    printf("\n������� ����� �����, ������� ����� ����������: ");
    scanf("%d", &n);
    for (i;i<=n-2;i++,j++)
    {
        s[j]=x[i];
    }
    for (i=n;strlen(x);i++,j++)
    {
        s[j]=x[i];
    }
    puts(s);
    return 0;
}
