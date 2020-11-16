#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()

{
	setlocale(LC_ALL, "Rus");
	int A[] = { 2, 9, 1, 7 ,3 };
	int n = sizeof(A) / sizeof(int);
	int j, i, x;
	float k = 1.247;

	//расческа
	for (j = n - 1; j >= 1; j /= k)
	{
		for (i = 0; i < n Ц j; i++)
		{
			if (A[i] > A[i + j])
			{
				x = A[i];
				A[i] = A[i + j];
				A[i + j] = x;
			}
		}
	}
	for (int j = 0; j < n; j++) {
		printf("%d", A[j]);
	}
	return 0;
}
