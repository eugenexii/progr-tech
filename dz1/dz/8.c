#include <stdio.h>

main()
{
    system("chcp 1251");
    system("cls");
    unsigned int x;
    int min=9, max=0;
    printf("Введите число: ");
    scanf("%ud", &x);
    while(x)
    {
        if (x%10>max) max=x%10;
        if (x%10<min) min=x%10;
        x/=10;
    }
    printf("а) максимальная цифра: %d, минимальная цифра: %d\n", max, min);
    printf("б) максимальная цифра превышает минимальную на %d\n", max-min);
    printf("в) сумма максимальной и минимальной цифры равна %d", max+min);
    return 0;
}
