#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct spisok
	{
		char fname[20];
		int school;
		int grade;
		int place;
	};

typedef struct spisok spi;

int firstPlases (spi s);
int morePrizes (spi s[], int n);
int prizes(spi s);

int main()
{
	system("chcp 1251");
	system("cls");
	int n = 12, i;
	spi s[12]=
	{
		"������", 33, 9, 6,
		"������", 19, 10, 10,
		"�������", 10, 9, 1,
		"�������", 3, 9, 3,
		"����������", 33, 10, 2,
		"������", 19, 11, 3,
		"�����", 3, 10, 1,
		"����������", 10, 10, 1,
		"�����", 3, 11, 3,
		"��������", 19, 8, 2,
		"�������", 33, 9, 5,
		"���������", 33, 11, 1
	};

	for(i = 0; i<n; i++)
	{
		if (prizes(s[i]))
            printf("����� %d - ����� %d\n", s[i].school, s[i].place);
	}
	printf("\n");
	morePrizes(s, n);
	printf("\n������ �����:\n");
	for(i = 0; i<n; i++)
	{
		firstPlases(s[i]);
	}printf("\n");
	printf("\n");

	return 0;
}

int prizes(spi s)
{
	if (s.place<=3) return s.school;
	return 0;
}

int morePrizes (spi s[], int n)
{
	int i, j, l=0, trigger;

	for(i=0; i<n; i++)
	{
		trigger=1;
		for (j=i; j>0; j--)
		{
			if(s[j].school==s[i].school)
			trigger = 0;
		}
		if(trigger) l++;
	}
	int sc[l], placeSc[l];
	l=0;
	for(i=1; i<n; i++)
	{
		trigger = 1;
		for (j=i-1; j>0; j--)
		{
			if(s[j].school==s[i].school)
			trigger = 0;
		}
		if(trigger)
		{
			sc[l] = s[i].school;
			placeSc[l]=0;
			l++;
		}
	}

	for (i=0; i<n; i++)
	{
		if(s[i].place<=3)
		{
			for(j=0; j<l; j++)
			{
				if(sc[j]==s[i].school)
				{
					placeSc[j]++;
				}
			}
		}
	}
	j=placeSc[0];
	for(i=1; i<l; i++)
	{
		if(placeSc[i]>j) l=i;
	}
	printf("����� %d - �������� ���� %d\n", sc[l], placeSc[l]);
	return placeSc[l];
}

int firstPlases (spi s)
{
	if (s.place==1)
	{
		printf("%s, �� ������ %d \n", s.fname, s.grade);
	}typedef struct spisok spi;
	return 0;
}
