#include <stdio.h>
#include <conio.h>
int main()
{
	float x,y;
	printf("Vvedite x, y\n");
	scanf("%f%f",&x,&y);
	printf("z = %f",((y-x)*(y-x)));
	getch();
	return 0;
}
