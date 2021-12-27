#include<stdio.h>

int main()
{
    system("chcp 1251");
    system("cls");
	int x, a, b, c;
	printf("Введите трехзначное число: ");
	scanf("%d",&x);
	a=x/100;
    b=x%100/10;
    c=x%10;
    x=b*100+c*10+a;
	printf("\nПолученное число: %d", x);
	return 0;
}
