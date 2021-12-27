#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define R1 6
#define R2 5
#define EPS 1e-6

int main()
{
    system("chcp 1251");
    system("cls");
	float x,y;
    printf("Введите координаты x,y: ");
    scanf("%f%f",&x,&y);
    if(x&&y&&(y+2*x-4>=EPS)&&(y+x-6<=EPS))
        printf("\n(а) Точка принадлежит области\n");
        else printf("\n(а) Точка НЕ принадлежит области\n");
    if(x&&y&&(y+x-3>=EPS)&&(x*x+y*y-R1*R1<=EPS))
        printf("(б) Точка принадлежит области\n");
        else printf("(б) Точка НЕ принадлежит области\n");
    if(x>=2&&(x*x+y*y-R1*R1<=EPS))
        printf("(в) Точка принадлежит области\n");
        else printf("(в) Точка НЕ принадлежит области\n");
    if((y-x-5<=EPS)&&(x*x+y*y-R2*R2<=EPS)&&(y+x+5<=EPS)&&(!x||y))
        printf("(г) Точка принадлежит области\n");
        else printf("(г) Точка НЕ принадлежит области\n");

    getch();
	return 0;
}

