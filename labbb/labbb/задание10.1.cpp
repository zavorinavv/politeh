#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()

{
	setlocale(LC_ALL, "Rus");
	int A, B;
	printf("������� A � B:", &A, &B);
	scanf_s("%i", &A);
	scanf_s("%i", &B);
	if ((A > 2) & (B <= 3))
	{
		printf("������");
	}
	else
	{
		printf("����");
	}
	return 0;
}