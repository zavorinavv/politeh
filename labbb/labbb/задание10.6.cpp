#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()

{
	setlocale(LC_ALL, "Rus");
	int a, b, c;
	printf("������� a, b, c:", &a, &b, &c);
	scanf_s("%i", &a);
	scanf_s("%i", &b);
	scanf_s("%i", &c);

	if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b))
	{
		printf("����������� �� ��������� a, b, c �������� �������������");
	}
	else
	{
		printf("����������� �� ��������� a, b, c �� �������� �������������");
	}
	return 0;
}