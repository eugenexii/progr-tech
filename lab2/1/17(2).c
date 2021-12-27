#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("chcp 1251");
    system("cls");
    float x, y;
    printf("x = "); scanf("%f", &x);
    if (x<3) {
        y=x;
    }
    else if ((3<=x)&&(x<=11)) {
        y=x*x*x-x;
    }
    else y=1/x;
    printf("Ответ: %g",y);
}

