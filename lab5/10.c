#include <stdio.h>
#include <conio.h>

int main()
{
    system("chcp 1251");
    system("cls");
    long int value1=20000, value2, *lPtr;
    lPtr=&value1;
    printf("\n  �������� �������, �� ������� ��������� lPtr: %d\n", *lPtr);
    value2=*lPtr;
    printf("  �������� value2:                             %d\n", value2);
    printf("  ����� value1:                                %d\n", &value1);
    printf("  �������� ������, ����������� � lPtr:         %d\n", lPtr);
    getch();
    return 0;
}
