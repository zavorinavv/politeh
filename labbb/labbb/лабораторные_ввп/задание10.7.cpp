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

	if ((a+b>c) || (b+c>a) || (a+c>b))
	{
		printf("Треугольник со сторонами a, b, c существует");
	}
	else
	{
		printf("Треугольник со сторонами a, b, c не существует");
	}
	return 0;
}