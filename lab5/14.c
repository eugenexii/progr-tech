#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    system("chcp 1251");
    system("cls");
    int a=4, *p=&a;
    char b='d', *q=&b;
    q=(char *)p;
    printf("%d %d %c\n", *p, *q, b);
}
