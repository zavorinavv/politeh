#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int k, A;
	printf("������� ���:", &A);
	scanf_s("%d", &A);;
	k = ((A - 1) / 100) + 1;
	printf("����� ��������:  %d \n", k);
	return 0;
}