#include <stdio.h>
#include <conio.h>

int main()
{
    system("chcp 1251");
    system("cls");
    long int value1=20000, value2, *lPtr;
    lPtr=&value1;
    printf("\n  значение объекта, на который ссылается lPtr: %d\n", *lPtr);
    value2=*lPtr;
    printf("  значение value2:                             %d\n", value2);
    printf("  адрес value1:                                %d\n", &value1);
    printf("  значение адреса, находящееся в lPtr:         %d\n", lPtr);
    getch();
    return 0;
}
