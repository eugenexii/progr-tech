#include <stdio.h>
#include <conio.h>

int main()
{
    system("chcp 1251");
    system("cls");
    unsigned long x;
    int i, n, s=0;
    printf("Введите натуральное число   : ");
    scanf("%lu",&x);
    n=(x>255)?(x>65535)?31:15:7;
    printf("Его двоичное представление  : ");
    for (i=n;i>=0;i--)
    {
        printf("%d",(x>>i)&0x1);
        if ((x>>i)&0x1)
            s++;
        if (i%8==0)
            printf(" ");
    }
    printf("\nКоличество единиц в двоичном виде:  %d", s);
    getch();
    return 0;
}
