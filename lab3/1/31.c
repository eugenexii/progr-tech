#include<stdio.h>

int main()
{
    system("chcp 1251");
    system("cls");
	int x=0, k, i, l=0, n=0;
    printf("������� k: ");
    scanf("%d",&k);
    for (i=0;i<=k;++i)
    {
        x=n+i;
        n=i;
        printf("%d", x);
    }
    printf("\n %d-�� ����� ��������������������: %d", k,n%10);
}
