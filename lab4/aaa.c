#include <stdio.h>
#include <conio.h>

int main()
{
    system("chcp 1251");
    system("cls");
    int a, i, n, m;
    printf("������� ����������� ����� : "); scanf("%d",&a);
    printf("��� �������� �������������: ");
    n=(a>255)?15:7;
    for (i=n;i>=0;i--)
        printf("%d",a>>i&0x1);
    printf("\n");
    for (i=n;a>>i!=1&&i>0;i--);
    a=(a&~(1<<i)|(a&1)<<i)&~1;
    printf("��������� : ");
    for (i=n;i>=0;i--)
    printf("%d",a>>i&1);
    getch();
}
