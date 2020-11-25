#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()

{
	setlocale(LC_ALL, "Rus");
	int A[100];
	int n = sizeof(A) / sizeof(int);
	int i, m;
	m = 10000;
	printf("введите количество элементов массива:");
	scanf_s("%i", &n);

	for (i = 0; i < n; i++) //ввод самих элементов
	{
		printf("A[%i] : ", i + 1);
		scanf_s("%i", &A[i]);
	}


	for (i = 1; i < n; i += 2)
	{
		if (A[i] < m)
		{
			m = A[i];
		}
	}



	printf("%i\n: ", m);

	return 0;
}
