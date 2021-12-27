#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#define A 1
#define B 8

int rook(int, int, int, int);
int bishop(int, int, int, int);
int king(int, int, int, int);
int queen(int, int, int, int);
int main()
{
    system("chcp 1251");
    system("cls");
    unsigned int a, b, c, d, n;
    printf("(1) �� ���� (a, b) ����������� �����, ��� �� �������� ���� (c, d);\n");
    printf("(2) �� ���� (a, b) ���������� ����, �� �� �������� ���� (c, d);\n");
    printf("(3) �� ���� (a, b) ���������� ������, �� ����� ����� ����� ������� �� ���� (c, d)\n");
    printf("(4) �� ���� (a, b) ���������� �����, �� �� �������� ���� (c, d)\n");
    printf("(5) ��� ����������������� ��������\n");
    printf("\n");
    printf("������� �����: "); scanf("%d", &n);
    srand(time(NULL));
    switch(n)
    {
        case 1: do
        {
            a=A+rand()%B;
            b=A+rand()%B;
            c=A+rand()%B;
            d=A+rand()%B;
        }
        while(rook(a,b,c,d));
        printf("���������� �����: a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);
        break;
        case 2:
            do
            {
                a=A+rand()%B;
                b=A+rand()%B;
                c=A+rand()%B;
                d=A+rand()%B;
            }
            while(bishop(a, b, c, d));
            printf("���������� �����: a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);
            break;
        case 3:
             do
             {
                 a=A+rand()%B;
                 b=A+rand()%B;
                 c=A+rand()%B;
                 d=A+rand()%B;
             }
             while(king(a, b, c, d));
             printf("���������� �����: a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);
             break;
         case 4:
             do
             {
                 a=A+rand()%B;
                 b=A+rand()%B;
                 c=A+rand()%B;
                 d=A+rand()%B;
             }
             while(queen(a, b, c, d));
             printf("���������� �����: a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);
             break;
         case 5:
             do
             {
                 a=A+rand()%B;
                 b=A+rand()%B;
                 c=A+rand()%B;
                 d=A+rand()%B;
             }
             while(rook(a, b, c, d)||(bishop(a, b, c, d))||(king(a, b, c, d))||(queen(a, b, c, d)));
             printf("���������� �����: a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);
             break;
         default: printf(">_>\n");break;
     }
     getch();
     return 0;
}

int rook(int xr, int yr, int x, int y)
{
  return ((xr==x)||(yr==y))?1:0;
}

int bishop(int xb, int yb, int x1,int y1)
{
   return ((xb+yb)==(x1+y1))||(abs(xb-yb)==abs(x1-y1))?1:0;
}

int king(int xk, int yk, int x2, int y2)
{
   return ((abs(xk-x2)==1)||(abs(yk-y2)==1))?1:0;
}

int queen(int xq, int yq, int x3, int y3)
{
   return (((xq==x3)||(yq==y3))||(abs(xq-yq)==abs(x3-y3))||((xq+yq)==(x3+y3)))?1:0;
}
