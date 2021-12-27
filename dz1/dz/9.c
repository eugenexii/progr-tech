#include <stdio.h>

main()
{
    system("chcp 1251");
    system("cls");
    unsigned int x, a, b;
    printf("Введите число: ");
    scanf("%ud", &x);
    a=x%10;
    x/=10;
    while(x)
    {
        b=x%10;
        if (b==a+1)
            x/=10;
        else printf("\nПоследовательность цифр не упорядочена"); break;
    }
    if (x) printf("\nПоследовательность цифр упорядочена");
    return 0;
}
