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

	for (i = 0; i < n; i++) //ввод самих элементов
	{
		printf("A[%i] : ", i + 1);
		scanf_s("%i", &A[i]);
	}



	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (A[i] == A[j])
			{
				printf(" %i  %i \t", i + 1, j + 1);//использование \t чтобы числа выводились все в строчку
			}
		}
	}



	return 0;
}
