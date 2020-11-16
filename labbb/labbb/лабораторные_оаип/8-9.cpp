#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()

{
	setlocale(LC_ALL, "Rus");
	int A[] = { 2, 9, 1, 7, 3, 0, 33, 56 };
	int n = sizeof(A) / sizeof(int);
	int j, i, x;
	for (j = 1; j < n; j++)
	{
		for (i = j, x = A[j]; (i > 0) && (A[i - 1] > x); i--)
		{
			A[i] = A[i - 1];
		}
		A[i] = x;
	}
	for (int j = 0; j < n; j++)
	{
		printf("%i \n", A[j]);
	}
	return 0;
}


