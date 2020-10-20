#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	float s, S, v1, v2, t;
	printf("¬ведите v1, v2, t, s:");
	scanf_s("%F", &v1);
	scanf_s("%F", &v2);
	scanf_s("%F", &t);
	scanf_s("%F", &s);
	S = s + (v1 + v2) * t;
	printf(" \n %F", S);
	return 0;}