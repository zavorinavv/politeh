#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int x;
	printf("Введите целое число х, лежащее в диапазоне 1 - 365:", &x);
	scanf_s("%d", &x);
	x = x % 7;
	printf("номер дня недели \n %d ", x);
	return 0;
}