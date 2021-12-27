#include<stdio.h>
#include<conio.h>

int main()
{
    int *p=NULL,
     **q=&p,
     ***r=&q,
     ****s=&r;
     p=(int *)&s;
     printf("p-%p, q-%p, r-%p, s-%p", p, q, r, s);
}
