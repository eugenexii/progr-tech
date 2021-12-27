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
		"Иванов", 33, 9, 6,
		"Петров", 19, 10, 10,
		"Смычков", 10, 9, 1,
		"Сидоров", 3, 9, 3,
		"Прокопенко", 33, 10, 2,
		"Онопко", 19, 11, 3,
		"Кокин", 3, 10, 1,
		"Барышников", 10, 10, 1,
		"Бойко", 3, 11, 3,
		"Слюсарев", 19, 8, 2,
		"Печорин", 33, 9, 5,
		"Быковский", 33, 11, 1
	};

	for(i = 0; i<n; i++)
	{
		if (prizes(s[i]))
            printf("Школа %d - место %d\n", s[i].school, s[i].place);
	}
	printf("\n");
	morePrizes(s, n);
	printf("\nПервые места:\n");
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
	printf("Школа %d - призовых мест %d\n", sc[l], placeSc[l]);
	return placeSc[l];
}

int firstPlases (spi s)
{
	if (s.place==1)
	{
		printf("%s, из класса %d \n", s.fname, s.grade);
	}typedef struct spisok spi;
	return 0;
}
