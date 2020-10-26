#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()

{
	setlocale(LC_ALL, "Rus");
	int A[5] = { 5, 9, 6, 1 ,55 };
	int j, i, x;

	//метод пузырька
	for (j = 0; j < 5 - 1; j++)
	{
		for (i = 0; i < 5 - 1 - j; i++)
		{
			if (A[i] > A[i + 1])
			{
				x = A[i];
				A[i] = A[i + 1];
				A[i + 1] = x;
			}
		}
	}
	for (int j = 0; j < 5; j++) {
		printf("%d \n", A[j]);
	}
	return 0;
}
