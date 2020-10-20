#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int a, x,x1, x2, x3, x4;
	printf("Введите a:", &a);//345- Например
	scanf_s("%d", &a);
	x1 = a % 10*100;//500
	x = a % 100;// 45
	x2 = x / 10*10;//40
	x3 = a / 100;//3
	x4 = x3 + x2 + x1;
	printf(" \n %d", x4);
	return 0;
}