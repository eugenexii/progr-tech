#include<stdio.h>

int main()
{
    system("chcp 1251");
    system("cls");
    unsigned int x, a, b, xa, xb, i;
    printf("������� �����: ");
    scanf("%ud", &x);
    printf("������� � � b: ");
    scanf("%ud%ud", &a, &b);
    while(x)
    {
        if ((x%10==a)&&(xa==0))
            xa=i;
        if ((x%10==b)&&(xb==0))
            xb=i;
        i++;
		x/=10;
        }
    if(xa&&xb)
        if(xa<xb)
            printf("\na ������ b");
            else printf("b ������ a");
        else printf("� ����� ��� ��������� ����");
    return 0;
}
