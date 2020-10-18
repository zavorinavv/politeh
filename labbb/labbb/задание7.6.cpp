#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	float A1, B1, C1, A2, B2, C2, x, y, p;
	printf("¬ведите A1, B1, C1, A2, B2, C2:");
	scanf_s("%F", &A1);
	scanf_s("%F", &B1);
	scanf_s("%F", &C1);
	scanf_s("%F", &A2);
	scanf_s("%F", &B2);
	scanf_s("%F", &C2);
	p = A1 * B2 - A2 * B1;
	x = (C1 * B2 - C2 * B1) / p;
	y = (A1 * C2 - A2 * C1) / p;
	printf(" \n %F", x);
	printf(" \n %F", y);
	return 0;
}