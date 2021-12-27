#include <stdio.h>
#include <string.h>

int main()
{
    system("chcp 1251");
    system("cls");
    int j=1,i=0;
    char x[20], s[20];
    printf("Введите слово: ");
    gets(x);
    for (i; strlen(x); i++, j++)
    {
        if (x[i]!='о') s[j]=x[i];
        else
        {
            s[j]=' ';
            s[j+1]='о';
            s[j+2]=' ';
            j+=2;
        }

    }
    printf("Преобразованное слово:");
    puts(s);
    return 0;
}
