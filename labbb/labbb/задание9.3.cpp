#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int k, n, z;
	printf("������� ����� ����� k, ������� � ��������� 1 - 365:", &k);
	scanf_s("%d", &k);
	printf("������� ����� ����� n, ������� � ��������� 1�7:", &n);
	scanf_s("%d", &n);
	z = ((k + n - 2) % 7) + 1;
	printf("����� ��� ������ \n %d ", z);
	return 0;
}