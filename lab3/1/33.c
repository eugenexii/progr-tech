#include<stdio.h>

int main()
{
    system("chcp 1251");
    system("cls");
	int k, i, l=1;
	unsigned long int x, a ,b;
    printf("¬ведите k: ");
    scanf("%d",&k);
    for (i=1;i<=k;i++)
    {
        a=0; b=1;
        x=a+b;
        a=b; b=x;
    printf("%lu", x);
    }
    printf("\n %d-а€ цифра последноватнельности: %lu", k,x%10);
}
