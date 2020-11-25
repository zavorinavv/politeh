#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()

{
	setlocale(LC_ALL, "Rus");
	int A[100];
	int n = sizeof(A) / sizeof(int);
	int i;
	printf("введите количество элементов массива ");
	scanf_s("%i", &n);
	for (i = 0; i < n; ++i) //ввод самих элементов
	{
		printf("A[%i] : ", i + 1);
		scanf_s("%i", &A[i]);
	}

	for (i = 0; i < n / 2 + 1; i += 2) 
	{
		printf("%i\n", A[i]);
		if (i < n / 2) 
			printf("%i\n", A[i + 1]);             
		if (n - i - 1 > n / 2) 
			printf("%i\n", A[n - i - 1]);
		if (n - i - 2 > n / 2)
			printf("%i\n", A[n - i - 2]);
	}
	return 0;
}