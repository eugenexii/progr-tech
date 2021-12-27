#include <stdio.h>
#include <math.h>

int main()
{
    double a;
    for(int x=0; x<=10; x++) {
        a=1+(double)x/10;
        printf("sin\(%g\)=%.20g \n", a, sin(a));
    }
}
