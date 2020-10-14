#include <stdio.h>
#include <math.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "Rus");
	float a, b, c, x;
	printf("¬ведите a, b, c:");
	scanf_s("%F", &a);
	scanf_s("%F", &b);
	scanf_s("%F", &c);
	x = a;
	a = c;
	c = b;
	b = x;
	printf(" \n %F", a);
	printf(" \n %F", b);
	printf(" \n %F", c);
	return 0;
}