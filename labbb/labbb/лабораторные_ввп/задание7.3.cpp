#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	float pi, a, k1, x, k, y;
	printf("¬ведите a, x, y:");
	scanf_s("%F", &a);
	scanf_s("%F", &x);
	scanf_s("%F", &y);
	k1 = a / x;
	k = (a * y) / x; 
	printf(" \n %F", k1);
	printf(" \n %F", k);
	return 0;}