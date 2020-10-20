#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, y, z, q;
	printf("¬ведите a, b:", &a, &b);
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	if (a > b)
	{
		y = a / b;
	}
	else
	{
		printf("нет решений");
	}
	z = y * b;
	q = a - z;
	printf(" \n %d", q);
	return 0;
}