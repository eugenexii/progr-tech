#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    for(int i=100;i<1000;i++) {
        if ((((i/10)*(i/10))-(i%10)*(i%10))==i) /*����������� ������� ����� �������� ����� ��   */
        {                                       /*������ ���� ���� � �������� �� ��������� �����*/
            printf("%d ", i);
        }
    }
}
