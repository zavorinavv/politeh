#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int d;
    printf("");
    scanf_s("%d", &d);

    switch (d / 100) {
    case 1: printf("��� "); break;
    case 2: printf("������ "); break;
    case 3: printf("������ "); break;
    case 4: printf("��������� "); break;
    case 5: printf("������� "); break;
    case 6: printf("�������� "); break;
    case 7: printf("������� "); break;
    case 8: printf("��������� "); break;
    case 9: printf("��������� "); break;
    }
    switch ((d % 100) / 10) {
    case 0: break;
    case 2: printf("�������� "); break;
    case 3: printf("�������� "); break;
    case 4: printf("����� "); break;
    case 5: printf("��������� "); break;
    case 6: printf("���������� "); break;
    case 7: printf("��������� "); break;
    case 8: printf("����������� "); break;
    case 9: printf("��������� "); break;
    case 1: switch (d % 100) {
    case 11: printf("����������� "); break;
    case 12: printf("���������� "); break;
    case 13: printf("���������� "); break;
    case 14: printf("������������ "); break;
    case 15: printf("���������� "); break;
    case 16: printf("����������� "); break;
    case 17: printf("���������� "); break;
    case 18: printf("������������ "); break;
    case 19: printf("������������ "); break;
    case 10: printf("������ "); break;
    }
    }
    if ((d % 100 / 10) != 1) {
        switch (d % 10) {
        case 0: break;
        case 1: printf("���� "); break;
        case 2: printf("��� "); break;
        case 3: printf("��� "); break;
        case 4: printf("������ "); break;
        case 5: printf("���� "); break;
        case 6: printf("����� "); break;
        case 7: printf("���� "); break;
        case 8: printf("������ "); break;
        case 9: printf("������ "); break;
        }
    }
    return 0;
}
