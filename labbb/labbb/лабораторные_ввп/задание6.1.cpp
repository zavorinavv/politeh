#include <stdio.h>
#include <math.h>
#include <locale.h>


	int main()
{
	setlocale(LC_ALL, "Rus");
	float a, b, x;
	printf("¬ведите a, b:");
	scanf_s("%F", &a);
	scanf_s("%F", &b);
	x = a;
	a = b;
	b = x;
	printf(" \n %F", a);
	printf(" \n %F", b);
	return 0;
}