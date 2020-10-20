#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int a, x;
	printf("¬ведите a:", &a);
	scanf_s("%d", &a);
	x = (a / 10) + (a % 10) * 10;
	printf(" \n %d", x);
	return 0;
}