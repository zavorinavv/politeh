#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int d, m;
        printf("");
        scanf_s("%d", &d);
        scanf_s("%d", &m);
        switch (d)
        {
        case 1:
            printf("������ \r\n");
            break;
        case 2:
            printf("������\r\n");
            break;
        case 3:
            printf("������\r\n");
            break;
        case 4:
            printf("���������\r\n");
            break;
        case 5:
            printf("�����\r\n");
            break;
        case 6:
            printf("������\r\n");
            break;
        case 7:
            printf("�������\r\n");
            break;
        case 8:
            printf("�������\r\n");
            break;
        case 9:
            printf("�������\r\n");
            break;
        case 10:
            printf("�������\r\n");
            break;
        case 11:
            printf("������������\r\n");
            break;
        case 12:
            printf("�����������\r\n");
            break;
        case 13:
            printf("�����������\r\n");
            break;
        case 14:
            printf("�������������\r\n");
            break;
        case 15:
            printf("�����������\r\n");
            break;
        case 16:
            printf("������������\r\n");
            break;
        case 17:
            printf("�����������\r\n");
            break;
        case 18:
            printf("�������������\r\n");
            break;
        case 19:
            printf("�������������\r\n");
            break;
        case 20:
            printf("���������\r\n");
            break;
        case 21:
            printf("�������� ������\r\n");
            break;
        case 22:
            printf("�������� ������\r\n");
            break;
        case 23:
            printf("�������� ������\r\n");
            break;
        case 24:
            printf("�������� ���������\r\n");
            break;
        case 25:
            printf("�������� �����\r\n");
            break;
        case 26:
            printf("�������� ������\r\n");
            break;
        case 27:
            printf("�������� �������\r\n");
            break;
        case 28:
            printf("�������� �������\r\n");
            break;
        case 29:
            printf("�������� �������\r\n");
            break;
        case 30:
            printf("���������\r\n");
            break;
        case 31:
            printf("�������� ������\r\n");
            break;
        default:
            printf("������ ��� ���\r\n");
            return 0;
        }
        switch (m)
        {
        case 1:
            printf("������ \r\n");
            break;
        case 2:
            printf("�������\r\n");
            break;
        case 3:
            printf("�����\r\n");
            break;
        case 4:
            printf("������\r\n");
            break;
        case 5:
            printf("���\r\n");
            break;
        case 6:
            printf("����\r\n");
            break;
        case 7:
            printf("����\r\n");
            break;
        case 8:
            printf("�������\r\n");
            break;
        case 9:
            printf("��������\r\n");
            break;
        case 10:
            printf("�������\r\n");
            break;
        case 11:
            printf("������\r\n");
            break;
        case 12:
            printf("�������\r\n");
            break;
        default:
            printf("������ ������ ���\r\n");
            return 0;
        }
    }