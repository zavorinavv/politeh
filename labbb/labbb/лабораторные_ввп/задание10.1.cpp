#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()

{
	setlocale(LC_ALL, "Rus");
	int A, B;
	printf("¬ведите A и B:", &A, &B);
	scanf_s("%i", &A);
	scanf_s("%i", &B);
	if ((A > 2) & (B <= 3))
	{
		printf("истина");
	}
	else
	{
		printf("ложь");
	}
	return 0;
}