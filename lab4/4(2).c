#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main()
{
    system("chcp 1251");
    system("cls");
    int x, i=1, a=0;
    printf("������� �����: ");
    scanf("%d", &x);
    while(x)
    {
        a+=((x%3)*i);
        i*=10;
        x/=3;
    }
    printf("� �������� ������� ���������: %d",a);
    getch();
    return 0;
}
