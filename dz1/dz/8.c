#include <stdio.h>

main()
{
    system("chcp 1251");
    system("cls");
    unsigned int x;
    int min=9, max=0;
    printf("������� �����: ");
    scanf("%ud", &x);
    while(x)
    {
        if (x%10>max) max=x%10;
        if (x%10<min) min=x%10;
        x/=10;
    }
    printf("�) ������������ �����: %d, ����������� �����: %d\n", max, min);
    printf("�) ������������ ����� ��������� ����������� �� %d\n", max-min);
    printf("�) ����� ������������ � ����������� ����� ����� %d", max+min);
    return 0;
}
