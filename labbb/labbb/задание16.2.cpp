#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()

{
	setlocale(LC_ALL, "Rus");
	int A[100];
	int n = sizeof(A) / sizeof(int);
	int i, j, x, D;
	j = 1;
	printf("введите количество элементов массива:");
	scanf_s("%i", &n);
	printf("введите первый член A:");
	scanf_s("%i", &A[0]);
	printf("введите знаменатель D:");
	scanf_s("%i", &D);
	for (i = 1; i < n; i++)
	{
		j = j * D;
		A[i] = A[0] * j;
	}
		A[i] = j;
	for (int i = 0; i < n; i++)
	{
		printf("%i \n", A[i]);
	}
	return 0;
}
