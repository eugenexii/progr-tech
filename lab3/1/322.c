#include<stdio.h>

int main()
{
    system("chcp 1251");
    system("cls");
	int k, i, l=0, n;
    printf("������� k: ");
    scanf("%d",&k);
    for (i=1;i<=k;++i)
    {
        n=i*i;
        printf("%d", n);
        while(n)
        {
            l++;
            n/=10;
        }
        if (l>=k)
        {
            n=i*i;
            while (l!=k)
            {
                n/=10;
                l--;
            }
            break;
        }
    }
    printf("\n %d-�� ����� ��������������������: %d", k,n%10);
}
