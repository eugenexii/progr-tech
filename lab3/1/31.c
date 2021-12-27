#include<stdio.h>

int main()
{
    system("chcp 1251");
    system("cls");
	int x=0, k, i, l=0, n=0;
    printf("¬ведите k: ");
    scanf("%d",&k);
    for (i=0;i<=k;++i)
    {
        x=n+i;
        n=i;
        printf("%d", x);
    }
    printf("\n %d-а€ цифра последноватнельности: %d", k,n%10);
}
