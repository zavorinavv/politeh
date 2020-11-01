
#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()

{
	setlocale(LC_ALL, "Rus");
	int A[] = { 2, 9, 1, 7, 3, 0, 33, 56 };
	int n = sizeof(A) / sizeof(int);
	int j, i, x;
	float k = 1.247;
	j = n - 1;
	while (j >= 1) {
		i = 0;
		while (i < n - j) {
			if (A[i] > A[i + j]) {
				x = A[i];
				A[i] = A[i + j];
				A[i + j] = x;
			}
			i++;
		}
		j /= k;
	}
	for (int j = 0; j < n; j++)
	{
		printf("%i \n", A[j]);
	}
	return 0;
}
