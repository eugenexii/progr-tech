#include <stdio.h>

int main()
{
    system("chcp 1251");
    system("cls");
    int x, a, b, c;
    printf("¬ведите трехзначное число (все цифры должны быть различны): ");
    scanf("%d", &x);
    a=x/100;
    b=x%100/10;
    c=x%10;
    printf("\nполученные числа: %d, %d, %d, %d, %d, %d.", b*100+a*10+c, b*100+c*10+a, a*100+c*10+b, c*100+a*10+b, c*100+b*10+a, a*100+b*10+c);
    return 0;
}
