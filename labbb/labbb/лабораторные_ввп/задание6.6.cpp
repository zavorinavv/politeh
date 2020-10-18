#include <stdio.h>
#include <math.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "Rus");
	float a, x;
	printf("¬ведите a:");
	scanf_s("%F", &a);
	x = a * a;
	x = x * x;
	x = x * x;
	printf(" \n %F", x);
	return 0;
}
