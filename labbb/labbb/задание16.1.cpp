#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()

{
	setlocale(LC_ALL, "Rus");
	int A[100];
	int n = sizeof(A) / sizeof(int);
	int i, j;
	i = 1;
	j = 1;
	printf("введите количество элементов массива:");
	scanf_s("%i", &n);
	for (i = 0; i < n; i++, j += 2)
		A[i] = j;
	for (int i = 0; i < n; i++)
	{
		printf("%i \n", A[i]);
	}
	return 0;
}
