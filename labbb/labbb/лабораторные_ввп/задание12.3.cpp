#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Rus");
    int n;
    printf("���-��:");
    scanf_s("%i", &n);

    if (n / 10 == 1)
        switch (n)
        {
        case 10:
            printf("������ ������� �������. \n");
            break;
        case 11:
            printf("���������� ������� �������.\n");
            break;
        case 12:
            printf("���������� ������� �������.\n");
            break;
        case 13:
            printf("���������� ������� �������.\n");
            break;
        case 14:
            printf("������������ ������� �������.\n");
            break;
        case 15:
            printf("���������� ������� �������.\n");
            break;
        case 16:
            printf("����������� ������� �������.\n");
            break;
        case 17:
            printf("���������� ������� �������.\n");
            break;
        case 18:
            printf("������������ ������� �������.\n");
            break;
        case 19:
            printf("������������ ������� �������.\n");
            break;
        }
    else
    {
        switch (n / 10) {
        case 2:
            printf("�������� ");
            break;
        case 3:
            printf("�������� ");
            break;
        case 4:
            printf("����� ");
            break;
        }

        switch (n % 10)
        {
        case 1:
            printf("���� ");
            break;
        case 2:
            printf("��� ");
            break;
        case 3:
            printf("��� ");
            break;
        case 4:
            printf("������ ");
            break;
        case 5:
            printf("���� ");
            break;
        case 6:
            printf("����� ");
            break;
        case 7:
            printf("���� ");
            break;
        case 8:
            printf("������ ");
            break;
        case 9:
            printf("������ ");
            break;
        }

        switch (n % 10)
        {
        case 0:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            printf("������� �������.\n");
            break;
        case 1:
            printf("������� �������.\n");
            break;
        case 2:
        case 3:
        case 4:
            printf("������� �������.\n");
            break;
        }
    }
    return 0;
}