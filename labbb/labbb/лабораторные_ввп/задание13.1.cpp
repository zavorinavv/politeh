#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");

	float A, i;
	printf("��������� ������ �� 1 ��:");
	scanf_s("%f", &A);

	for (i = 0.1; i< 1.1; i += 0.1)
	printf("%f �� = %0.2f \n ", i, A * i);
	return 0;
}