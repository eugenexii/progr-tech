#include <stdio.h>

/*  main() {int a,aa ,   aaa, aaaa, aaaaa; int aaaaaa();
    scanf("%d",aaa) ;    scanf("%d",&aaaa);a=aaa;aa =
    aaaa;aaaaa=1;while   (aa!=0)if(aaaaaa(aa)) {aaaaa
    *=a;aa--;}else{a*=   a;aa/=2;}printf("%d",aaaaa);
    }int aaaaaa(t)int    t; {return((t%2==0)? 0 : 1);} */

int main()
{
    int a, a2, a3, a4, a5;
    int a6();
    scanf("%d", &a3);
    scanf("%d", &a4);
    a = a3;
    a2 = a4;
    a5 = 1;
    while(a2 != 0)
    {
        if (a6(a2))
        {
            a5 *= a;
            a--;
        }
        else
        {
            a *= a;
            a2 /= 2;
        }
        printf("%d", a5);
    }
    int t;
    int a6(t);

    {
        return ((t%2==0)? 0 : 1);
    }
}
