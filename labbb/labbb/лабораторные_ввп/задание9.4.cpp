#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int k, A, B, C, s, s1;
	printf("Введите целые числа A, B, C:", &A, &B, &C);
	scanf_s("%d", &A);
	scanf_s("%d", &B);
	scanf_s("%d", &C);
    k = (A / C) * (B / C);
    s = k * sqrt(C);
    s1 = A * B - s;
	printf("количество квадратов, размещенных на прямоугольнике  %d \n", k);
	printf("площадь незанятой части прямоугольника  %d \n", s1);
	return 0;
}