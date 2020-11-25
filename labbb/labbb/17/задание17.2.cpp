#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()

{
	setlocale(LC_ALL, "Rus");
	int A[100];
	int n = sizeof(A) / sizeof(int);
	int i, q;

	printf("введите количество элементов массива:");
	scanf_s("%i", &n);

	for (i = 0; i < n; i++) //ввод самих элементов
	{
		printf("A[%i] : ", i + 1);
		scanf_s("%i", &A[i]);
	}

	q = A[1] - A[0];
	for (i = 1; i < n; ++i)
	{
		if (q != A[i] - A[i - 1])
		{
			q = 0;
		}
	}



	printf("%i\n: ", q);

	return 0;
}
