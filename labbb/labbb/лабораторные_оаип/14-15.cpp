

#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()

{
	setlocale(LC_ALL, "Rus");
	int A[] = { 2, 9, 1, 7, 3, 0, 33, 56, -4 };
	int n = sizeof(A) / sizeof(int);
	int j, i, x;
	i = 1;
	j = 2;
	for (; i < n; i--)
	{
		if (A[i - 1] > A[i])
		{
			x = A[i];
			A[i] = A[i - 1];
			A[i - 1] = x;

			if (i > 0) continue;
		}
		i = j++;
	}

	for (int i = 0; i < n; i++)
	{
		printf("%i \n", A[i]);
	}
	return 0;
}
