#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("chcp 1251");
    system("cls");
    char x[100],s[100];
    int n;
    printf("������� �����: ");
    gets(x);
    printf("\n������� ����� �����, ������� ����� ����������: ");
    scanf("%d", &n);
    strncpy(s, x, n-1);
    strncat(s,x+n,strlen(x));
    puts(s);
    return 0;
}
