#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("chcp 1251");
    system("cls");
    int a;
    printf("�������: "); scanf("%d", &a);
    switch (a) {
        case 2: printf("�������.");
            break;
        case 3: printf("�����.");
            break;
        case 4: printf("������");
            break;
        case 5: printf("�������");
    }
}
