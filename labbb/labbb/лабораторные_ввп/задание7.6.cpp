#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()

{
	setlocale(LC_ALL, "Rus");
	int A[] = { 2, 7, 1, 7 ,3, 9 };
	int j = 1, i = 1, x;
	int N = sizeof(A) /
		sizeof(int);

	
	while (i <= N - 1)
	{
		while (j <= N - i)
		{
			if (A[j] > A[j + 1])
			{
				x = A[j];
				A[j] = A[j + 1];
				A[j + 1] = x;
			}
			j++;
		}
		i++;
	}
	for (int i = 0; i < 5; i++) {
		printf("%d", A[i] );
	}
	return 0;
}