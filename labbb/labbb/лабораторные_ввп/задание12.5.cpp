#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");
	int d;
	printf("");
	scanf_s("%d", &d);
	printf("��� ");
	switch (d % 10)
	{
	case 0:
		if (d % 12 == 6 || d % 12 == 7 || d % 12 == 8)
			printf("������ ");
		else
			printf("����� ");
		break;
	case 1:
		if (d % 12 == 6 || d % 12 == 7 || d % 12 == 8)
			printf("������ ");
		else
			printf("����� ");
		break;
	case 2:
		if (d % 12 == 6 || d % 12 == 7 || d % 12 == 8)
			printf("������� ");
		else
			printf("������ ");
		break;
	case 3:
		if (d % 12 == 6 || d % 12 == 7 || d % 12 == 8)
			printf("������� ");
		else
			printf("������ ");
		break;
	case 4:
		if (d % 12 == 6 || d % 12 == 7 || d % 12 == 8)
			printf("�������� ");
		else
			printf("������� ");
		break;
	case 5:
		if (d % 12 == 6 || d % 12 == 7 || d % 12 == 8)
			printf("�������� ");
		else
			printf("������� ");
		break;
	case 6:
		if (d % 12 == 6 || d % 12 == 7 || d % 12 == 8)
			printf("�������� ");
		else
			printf("������� ");
		break;
	case 7:
		if (d % 12 == 6 || d % 12 == 7 || d % 12 == 8)
			printf("�������� ");
		else
			printf("������� ");
		break;
	case 8:
		if (d % 12 == 6 || d % 12 == 7 || d % 12 == 8)
			printf("������� ");
		else
			printf("������ ");
		break;
	case 9:
		if (d % 12 == 6 || d % 12 == 7 || d % 12 == 8)
			printf("������� ");
		else
			printf("������ ");
		break;
	default:
		break;
	}

	switch (d % 12)
	{
	case 0:
		printf("��������");break;
	case 1:
		printf("������");break;
	case 2:
		printf("������");break;
	case 3:
		printf("������");break;
	case 4:
		printf("�����");break;
	case 5:
		printf("������");break;
	case 6:
		printf("�����");break;
	case 7:
		printf("�����");break;
	case 8:
		printf("�������");break;
	case 9:
		printf("����");break;
	case 10:
		printf("������");break;
	case 11:
		printf("����");break;
	default:
		break;
	}


	return 0;
}

