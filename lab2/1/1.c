#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("chcp 1251");
    system("cls");
    int a,b;
    printf("¬ведите 2 числа: "); scanf("%d%d", &a, &b);
    if (a==b) {
            printf("числа равны");
        }
    else if (a>b) {
            printf("%d больше, чем %d", a, b);
    }
    else printf("%d больше, чем %d", b, a);
}
