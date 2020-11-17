#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");

	float A, i;
	printf("стоимость конфет за 1 кг:");
	scanf_s("%f", &A);

	for (i = 0.1; i< 1.1; i += 0.1)
	printf("%f кг = %0.2f \n ", i, A * i);
	return 0;
}