#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

unsigned long fib(unsigned long);
int main()
{
    system("chcp 1251");
    system("cls");

    unsigned long x;
    do
    {
        printf("¬ведите номер числа ‘иббоначи: ");
        scanf("%ud", &x);
        if (fib(x)%5==0)
            printf("%d делитс€ на 5\n", fib(x));
        else printf("%d не делитс€ на 5\n", fib(x));
    }
    while(x);
    getch();
    return 0;
}

unsigned long fib(unsigned long i)
{
    unsigned long t=i;
    static long F[40];
    if (F[i]!=0)
        return F[i];
    if (i<0)
        return 0;
    if (i>1)
        t=fib(i-1)+fib(i-2);
    return F[i]=t;
}
