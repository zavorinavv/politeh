#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()

{
	setlocale(LC_ALL, "Rus");
	int A[] = { 2, 9, 1, 7, 3, 0, 33, 56, -4 };
	int n = sizeof(A) / sizeof(int);
	int j, i, x, d;
	d = n / 2;
	while (d > 0)
	{
		i = d;
		while (i < n)
		{
			x = A[i];
			j = i;
			while (j >= d)
			{
				if (x < A[j - d])
				{
					A[j] = A[j - d];
					j = j - d;
				}
				else break;
			}
			A[j] = x;
			i++;
		}
		d = d / 2;
	}
	for (int i = 0; i < n; i++)
	{
		printf("%i \n", A[i]);
	}
	return 0;
}



