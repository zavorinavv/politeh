#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()

{
	setlocale(LC_ALL, "Rus");
	int a, b, c;
	printf("Введите a, b, c:", &a, &b, &c);
	scanf_s("%i", &a);
	scanf_s("%i", &b);
	scanf_s("%i", &c);

	if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b))
	{
		printf("Треугольник со сторонами a, b, c является прямоугольным");
	}
	else
	{
		printf("Треугольник со сторонами a, b, c не является прямоугольным");
	}
	return 0;
}