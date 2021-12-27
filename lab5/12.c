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

/* p - значение (равное адресу r), *q - указатель на значение p, r - адрес r, *p - указатель на адрес r,
   q - адрес q, *r - указатель на адрес q, ***r - указатель на p, который ссылается на адрес r.            */
