#include<stdio.h>
#include<conio.h>

int main()
{
   int *p=NULL,
       **q=&p,
       ***r=&q;
   p=(int *)&r;
   printf("%p %p %p %p %p %p %p\n",
          p,*q,r,*p,q,*r,***r);
   getch();
   return 0;
}

/* p - �������� (������ ������ r), *q - ��������� �� �������� p, r - ����� r, *p - ��������� �� ����� r,
   q - ����� q, *r - ��������� �� ����� q, ***r - ��������� �� p, ������� ��������� �� ����� r.            */
