#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#define A 1
#define B 8

int w1(int, int, int, int);
int w2(int, int, int, int);
int b1(int, int, int, int);
int b2(int, int, int, int);
int knight(int, int, int, int);
int main()
{
    system("chcp 1251");
    system("cls");
    int a,b,c,d,n;
    srand(time(NULL));
    printf("�������� ���������� a, b, c, d ������ ���� ������, ���:\n");
    printf("  * ����  ��  ���� (a,b) ����������� ����� ����� (����� �������,\n");
    printf("��� ����� ����� ������������ ����� �����), �� ��� ����� ����� �����\n");
    printf("������� �� ���� (c,d):\n");
    printf("  (11) ��� ������� ����;\n");
    printf("  (12) ����� ��� \"����\" ������ ��� ����� ���������;\n");
    printf("  * ���� �� ���� (a,b) ����������� ������ ����� (�����  �������,\n");
    printf("���  ������ ����� ������������ �� ����� ������ ����),  �� ��� �����\n");
    printf("����� ����� ������� �� ���� (c,d):\n");
    printf("  (21) ��� ������� ����;\n");
    printf("  (22) ����� ��� \"����\" ������ ��� ����� ���������;\n");
    printf("  (3) ����  ��  ����  (a,b)  ���������� ����,  �� �� �������� ����(c,d).\n");
    printf("\n");
    printf("������� �����: "); scanf("%d",&n);
    switch(n)
    {
      case 11:
          do
          {
              a=A+rand()%B;
              b=A+rand()%B;
              c=A+rand()%B;
              d=A+rand()%B;
          }
          while(w1(a, b, c, d));
          printf("����������: a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);
          break;
      case 12:
          do
          {
              a=A+rand()%B;
              b=A+rand()%B;
              c=A+rand()%B;
              d=A+rand()%B;
          }
          while(w2(a, b, c, d));
          printf("����������: a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);
          break;
      case 21:
          do
          {
              a=A+rand()%B;
              b=A+rand()%B;
              c=A+rand()%B;
              d=A+rand()%B;
          }
          while(b1(a, b, c, d));
          printf("����������: a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);
          break;
      case 22:
          do
          {
              a=A+rand()%B;
              b=A+rand()%B;
              c=A+rand()%B;
              d=A+rand()%B;
          }
          while(b2(a, b, c, d));
          printf("����������: a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);
          break;
      case 3:
          do
          {
              a=A+rand()%B;
              b=A+rand()%B;
              c=A+rand()%B;
              d=A+rand()%B;
          }
          while(knight(a, b, c, d));
          printf("����������: a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);
          break;
      default: printf(">_>"); break;
    }
    getch();
    return 0;
}
int w1(int xw, int yw, int x, int y)
{
  return ((x-xw==1)&&(yw==y))?0:1;
}

int w2(int xw1, int yw1, int x1, int y1)
{
  return ((x1-xw1==1)&&(abs(y1-yw1)==1))?0:1;
}

int b1(int xb, int yb, int x2, int y2)
{
  return ((xb-x2==1)&&(yb==y2))?0:1;
}

int b2(int xb2, int yb2, int x3, int y3)
{
  return ((xb2-x3==1)&&(abs(yb2-y3)==1))?0:1;
}

int knight(int xk, int yk, int x4, int y4)
{
  return ((abs(x4-xk)==1)&&(abs(y4-yk)==2))||((abs(x4-xk)==2)&&(abs(y4-yk)==1))?0:1;
}
