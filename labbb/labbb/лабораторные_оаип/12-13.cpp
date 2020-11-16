#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()

{
	setlocale(LC_ALL, "Rus");
	int A[] = { 2, 9, 1, 7, 3, 0, 33, 56, -4 };
	int n = sizeof(A) / sizeof(int);
	int j, i = 0, buf, min;
	while (i < n - 1)
	{ 
		j = i + 1;
		min = i;
		while (j < n)
		{
			if (A[j] < A[min])
				min = j;
			    j++;
		}
		buf = A[i];
		A[i] = A[min];
		A[min] = buf;
		i++;
	}
	for (int i = 0; i < n; i++)
	{
		printf("%i \n", A[i]);
	}
	return 0;
}