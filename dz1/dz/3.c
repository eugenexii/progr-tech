#include<stdio.h>

int main()
{
    system("chcp 1251");
    system("cls");
	int x, a, b, c;
	printf("������� ����������� �����: ");
	scanf("%d",&x);
	a=x/100;
    b=x%100/10;
    c=x%10;
    x=b*100+c*10+a;
	printf("\n���������� �����: %d", x);
	return 0;
}
