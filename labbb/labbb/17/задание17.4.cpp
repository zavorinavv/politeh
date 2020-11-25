#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()

{
	setlocale(LC_ALL, "Rus");
	int A[100];
	int n = sizeof(A) / sizeof(int);
	int i;
	printf("введите количество элементов массива:");
	scanf_s("%i", &n);

	for (i = 0; i < n; i++) //ввод самих элементов
	{
		printf("A[%i] : ", i + 1);
		scanf_s("%i", &A[i]);
	}


	if (A[n - 1] > A[n - 2])
	{
		printf("%i \n", n);
	}
	else
	{
		i = n - 2;
		while ((i >= 1) && !((A[i - 1] < A[i]) && (A[i] > A[i + 1])))
		{
			i--;
		}
		printf("%i \n", i + 1);
	}




	return 0;
}
