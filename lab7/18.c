#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define a 1
#define b 3
#define q 2

unsigned int fun(unsigned int);
int main()
{
    system("chcp 1251");
    system("cls");
    unsigned int k, c, d;
    printf("¬ведите k: ");
    scanf("%u", &k);
    printf("¬ведите c и d: ");
    scanf("%u %u", &c, &d);
    printf("k %u - %u\n", k, fun(k));
    do k--;
    while(c<fun(k));
    do
    {
        printf("k(%u) - %u\n", k, fun(k));
        k++;
    }
    while(d>fun(k));
    getch();
    return 0;
}

unsigned int fun(unsigned int x)
{
   return (x>0)? q*fun(x-1)+b:a;
}
