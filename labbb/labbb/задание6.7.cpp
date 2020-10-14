#include <stdio.h>
#include <math.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "Rus");
	float a, x, x1;
	printf("¬ведите a:");
	scanf_s("%F", &a);
	x = a * a;
	x1 = a * x;
	x1 = x1 * x;
	x = x1 * x1;
	x = x * x1;
	printf(" \n %F", x);
	return 0;
}