#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");
	int s, k, A;
	int N, i;
	printf("");
	scanf_s("%d", &A);
	scanf_s("%d", &N);
	k = 1;
	s = 0;
	for (i = 1; i <= N; i++)
	{
		k = k * A;
		s = s + k;
	}
	printf("сумма чисел = %i\n", s);
	return 0;
}


