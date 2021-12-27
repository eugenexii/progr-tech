#include <stdio.h>

int main()
{
    for(int n=1;n<=20;n++) {
        printf("%g ", (float)(n/((float)n+1)));
    }
}
