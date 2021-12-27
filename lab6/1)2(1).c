#include <stdio.h>

void speak(void);
int main()
{
    void speak();
    speak(); speak();
    return 0;
}
                            /*Вызывается функция speak() два раза, которая выводит на экран "Привет." */
void speak()
{
    printf("Привет.\n");
}
