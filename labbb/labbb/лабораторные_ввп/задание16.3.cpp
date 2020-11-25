#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()

{
	setlocale(LC_ALL, "Rus");
	int A[100];
	int n = sizeof(A) / sizeof(int);
	int i, j;
	printf("введите количество элементов массива:");
	scanf_s("%i", &n);
	printf("введите первый элемент A:");
	scanf_s("%i", &A[0]);
	printf("введите второй элемент B:");
	scanf_s("%i", &A[1]);
	
	for (i = 2; i < n; i++)
	{   
		A[i] = 0;
		for (j = 0; j < i; j++)
			A[i] = A[i] + A[j];
	}
	for (int i = 0; i < n; i++)
	{
		printf("%i \n", A[i]);
	}
	return 0;
}