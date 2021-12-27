#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

float f(int x);
int main()
{
    int a;
    printf("введите а: ");
    scanf("%d", &a);
    printf("%g", f(a));
}

float f(int x)
{
    return (x==1)?(11-2*sqrt(11+2*sqrt(11-2*sqrt(11)))):sqrt(11-2*sqrt(11+2*sqrt(11-2*sqrt(f(x-1)))));
}
