#include <stdio.h>
#include <conio.h>

int main()
{
    system("chcp 1251");
    system("cls");
    unsigned long x;
    int i, n, s=0;
    printf("������� ����������� �����   : ");
    scanf("%lu",&x);
    n=(x>255)?(x>65535)?31:15:7;
    printf("��� �������� �������������  : ");
    for (i=n;i>=0;i--)
    {
        printf("%d",(x>>i)&0x1);
        if (i%8==0)
            printf(" ");
    }
    for (i=n;x>>i!=1&&i>0;i--);
    x=(x&~(1<<i)|(x&1)<<i)&~1;
    printf("\n��������������� �����       : ");
    for (i=n;i>=0;i--)
    printf("%d",x>>i&0x1);
    getch();
    return 0;
}
