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
	if (A!=B)
	{
		if (A<B) 
		{
			A = B;
		}
		else
		{
			B = A;
		}
	}
	else 
	{
		A = 0;
		B = 0;
	}
	printf(" \n %i ", A);
	printf(" \n %i ", B);
	return 0;
}