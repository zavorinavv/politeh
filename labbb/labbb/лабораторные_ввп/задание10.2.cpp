#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()

{
	setlocale(LC_ALL, "Rus");
	int A, B, C;
	printf("������� A � B � �:", &A, &B, &C);
	scanf_s("%i", &A);
	scanf_s("%i", &B);
	scanf_s("%i", &C);
	if ((A < B) & (B < C))
	{
		printf("������");
	}
	else
	{
		printf("����");
	}
	return 0;
}