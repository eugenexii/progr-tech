#include <stdio.h>

void speak(void);
int main()
{
    void speak();
    speak(); speak();
    return 0;
}
                            /*���������� ������� speak() ��� ����, ������� ������� �� ����� "������." */
void speak()
{
    printf("������.\n");
}
