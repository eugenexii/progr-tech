#include <stdio.h>

int main()
{
    system("chcp 1251");
    system("cls");
    int x, a, b, c, d;
    printf("¬ведите четырехзначное число: ");
    scanf("%d", &x);
    a=x/1000;
    b=x%1000/100;
    c=x%100/10;
    d=x%10;
    printf("a) %d \nб) %d \nв) %d \nг) %d", d*1000+c*100+b*10+a, b*1000+a*100+d*10+c, a*1000+c*100+b*10+d, c*1000+d*100+a*10+b);
    return 0;
}
