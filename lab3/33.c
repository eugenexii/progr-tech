#include<stdio.h>

int main()
{
    system("chcp 1251");
    system("cls");
    unsigned long int a=1, b=0, x;
    int k, l=1;
    printf("Введите k: ");
    scanf("%d",&k);
    printf("1");
    while(l)
    {
        x=a+b;
        printf("%lu", x);
        b=a;
        a=x;
        while(a)
        {
            l++;
            a/=10;
        }
        if(l>=k)
        {
            while(l!=k)
            {
                x/=10;
                l--;
            }
            break;
        }
		a=x;
    }
    printf("\nОтвет: %lu",x%10);
    return 0;
}
