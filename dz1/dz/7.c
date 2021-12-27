#include <stdio.h>

main()
{
    system("chcp 1251");
    system("cls");
    int m, k;
    printf("Введите m, k: ");
    scanf("%d %d", &m, &k);
    switch(m)
    {
        case 6: {printf("Шестерка "); break;}
        case 7: {printf("Семерка "); break;}
        case 8: {printf("Восьмерка "); break;}
        case 9: {printf("Девятка "); break;}
        case 10: {printf("Десятка "); break;}
        case 11: {printf("Валет "); break;}
        case 12: {printf("Дама "); break;}
        case 13: {printf("Король "); break;}
        case 14: {printf("Туз "); break;}
        default: {printf("Введено неправиольное значение");}
    }
    switch(k)
    {
        case 1: {printf("Пики"); break;}
        case 2: {printf("Трефы"); break;}
        case 3: {printf("Бубы"); break;}
        case 4: {printf("Червы"); break;}
    }
    return 0;
}
