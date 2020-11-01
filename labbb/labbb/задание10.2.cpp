#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()

{
	setlocale(LC_ALL, "Rus");
	int A, B, C;
	printf("Введите A и B и С:", &A, &B, &C);
	scanf_s("%i", &A);
	scanf_s("%i", &B);
	scanf_s("%i", &C);
	if ((A < B) & (B < C))
	{
		printf("истина");
	}
	else
	{
		printf("ложь");
	}
	return 0;
}