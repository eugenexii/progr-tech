#include <stdio.h>

main()
{
    system("chcp 1251");
    system("cls");
    int m, k;
    printf("������� m, k: ");
    scanf("%d %d", &m, &k);
    switch(m)
    {
        case 6: {printf("�������� "); break;}
        case 7: {printf("������� "); break;}
        case 8: {printf("��������� "); break;}
        case 9: {printf("������� "); break;}
        case 10: {printf("������� "); break;}
        case 11: {printf("����� "); break;}
        case 12: {printf("���� "); break;}
        case 13: {printf("������ "); break;}
        case 14: {printf("��� "); break;}
        default: {printf("������� ������������� ��������");}
    }
    switch(k)
    {
        case 1: {printf("����"); break;}
        case 2: {printf("�����"); break;}
        case 3: {printf("����"); break;}
        case 4: {printf("�����"); break;}
    }
    return 0;
}
