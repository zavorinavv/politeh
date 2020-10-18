#include <stdio.h>
#include <math.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "Rus");
	float y, x;
	printf("¬ведите x:");
	scanf_s("%F", &x);
	y = 4 * (x - 3) * (x - 3) * (x - 3) * (x - 3) * (x - 3) * (x - 3) - 7 * (x - 3) * (x - 3) * (x - 3) + 2;
	printf(" \n %F", y);
	return 0;
}