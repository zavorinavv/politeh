#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()

{
	setlocale(LC_ALL, "Rus");
	int A, x, y, z, c;
	printf("¬ведите a, b, c:", &a, &b, &c);
	scanf_s("%i", &a);
	scanf_s("%i", &b);
	scanf_s("%i", &c);
	A = abs(A);
	x = A % 10;
	y = A / 1000;
	z = (A % 100) / 10;
	c = (A % 1000) / 100;
	if ((x == y) & (z == c))
	{
		printf("истина");
	}
	else
	{
		printf("ложь");
	}
	return 0;
}