#include <stdio.h>
#include <math.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "Rus");
	float y, x;
	printf("¬ведите x:");
	scanf_s("%F", &x);
	y = 3 * x * x * x * x * x * x - 6 * x * x - 7;
	printf(" \n %F", y);
	return 0;
}