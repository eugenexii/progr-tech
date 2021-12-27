#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("chcp 1251");
    system("cls");
    int a;
    printf("отметка: "); scanf("%d", &a);
    switch (a) {
        case 2: printf("неудовл.");
            break;
        case 3: printf("удовл.");
            break;
        case 4: printf("хорошо");
            break;
        case 5: printf("отлично");
    }
}
