#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("chcp 1251");
    system("cls");
    int x,y,z;
    printf("������� ����� x, y, z: ");
    scanf("%d %d %d", &x,&y,&z);
    if (x>y)
        if (x>z)
            printf("%d",x);
        else printf("%d",z);
    else if (y>z)
        printf("%d",y);
        else printf("%d",z);
}

