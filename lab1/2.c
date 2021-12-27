#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,s;
printf("Введите число : ");
scanf("%d" , &a);
s=(a%10)+(a/10);
printf("Сумма цифр: %d",s);
}
