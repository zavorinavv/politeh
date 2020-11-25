#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()

{
	setlocale(LC_ALL, "Rus");
	int A[100];
	int n = sizeof(A) / sizeof(int);
	int i, K, L, S, k;
	S = 0;
	printf("введите количество элементов массива:");
	scanf_s("%i", &n);
	printf("введите K:");
	scanf_s("%i", &K);
	printf("введите L:");
	scanf_s("%i", &L);
	k = L - K + 1;
	for (i = 0; i < n; i++) //ввод самих элементов
	{
		printf("A[%i] : ", i + 1);
		scanf_s("%i", &A[i]);
	}

	for (i = K - 1; i <= L - 1; ++i)
		S = S + A[i];




	printf("%i\n: ", S / k);

	return 0;
}