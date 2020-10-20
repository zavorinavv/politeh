#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	float x, B, A;
	printf("¬ведите B, A:");
	scanf_s("%F", &B);
	scanf_s("%F", &A);

	x = -(B / A); 
		printf(" \n %F", x);
	return 0;
}