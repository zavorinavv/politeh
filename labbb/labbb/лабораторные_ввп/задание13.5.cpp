#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");
	float s, k, A,
	int i, N;
	printf("");
	scanf_s("%d", &A);
	scanf_s("%d", &N);
	k = 1;
	s = 1;
	for (i = 1; i <= N; i++)
	{
		k = -k * A;
		s = s + k;
	}
	printf("сумма чисел = %i\n", s);
	return 0;
}