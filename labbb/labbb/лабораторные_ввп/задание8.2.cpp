#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, y;
	printf("������� a, b:", &a, &b);
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	if (a > b)
	{
		y = a / b;
	}
	else
	{
		printf("��� �������");
	}
	printf(" \n %d", y);
	return 0;
}