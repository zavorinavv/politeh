#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	float pi, a, y;
	printf("������� a:");
	scanf_s("%F", &a);
	pi = 3.14;
	y = (180 * a)/pi;
	printf(" \n %F", y);
	return 0;}