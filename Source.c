#pragma warning(disable:4996)
#include <stdio.h>
#include <conio.h>

void product(float a, float b, float c);

int main()
{
	float x, y, z;

	printf("Type three numbers, separated by spaces: ");
	scanf("%f %f %f", &x, &y, &z);
	product(x, y, z);

	_getch();
	return(0);
}

void product(float a, float b, float c)
{
	float p;

	p = a * b * c;
	printf("%f * %f * %f = %f\n", a, b, c, p);
}