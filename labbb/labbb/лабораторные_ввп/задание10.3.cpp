#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()

{
	setlocale(LC_ALL, "Rus");
	int A, B, C;
	printf("������� A:", &A);
	scanf_s("%i", &A);

	if ((A % 2 == 0) & (A < 100) & (A > 9))
	{
		printf("������");
	}
	else
	{
		printf("����");
	}
	return 0;
}