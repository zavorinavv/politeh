#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int x, y;
	printf("¬ведите х:", &x);
	scanf_s("%d", &x);
	y = x % 60;
	printf(" \n %d", y);
	return 0;
}