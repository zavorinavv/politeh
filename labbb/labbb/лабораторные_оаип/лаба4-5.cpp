#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()

{
	setlocale(LC_ALL, "Rus");
	int j = 0, i = 0, x;
	int A[4] = { 2, 7, 1, 7 };
	
	while (i < 4 - 1)
	{
		while (j < 4 - 1 - i)
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
		printf("%d", A[i]);
	}
	return 0;
}
