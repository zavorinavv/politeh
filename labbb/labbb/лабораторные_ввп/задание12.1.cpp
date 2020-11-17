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
            printf("первое \r\n");
            break;
        case 2:
            printf("второе\r\n");
            break;
        case 3:
            printf("третье\r\n");
            break;
        case 4:
            printf("четвертое\r\n");
            break;
        case 5:
            printf("пятое\r\n");
            break;
        case 6:
            printf("шестое\r\n");
            break;
        case 7:
            printf("седьмое\r\n");
            break;
        case 8:
            printf("восьмое\r\n");
            break;
        case 9:
            printf("девятое\r\n");
            break;
        case 10:
            printf("десятое\r\n");
            break;
        case 11:
            printf("одиннадцатое\r\n");
            break;
        case 12:
            printf("двенадцатое\r\n");
            break;
        case 13:
            printf("тринадцатое\r\n");
            break;
        case 14:
            printf("четырнадцатое\r\n");
            break;
        case 15:
            printf("пятнадцатое\r\n");
            break;
        case 16:
            printf("шестнадцатое\r\n");
            break;
        case 17:
            printf("семнадцатое\r\n");
            break;
        case 18:
            printf("восемнадцатое\r\n");
            break;
        case 19:
            printf("девятнадцатое\r\n");
            break;
        case 20:
            printf("двадцатое\r\n");
            break;
        case 21:
            printf("двадцать первое\r\n");
            break;
        case 22:
            printf("двадцать второе\r\n");
            break;
        case 23:
            printf("двадцать третье\r\n");
            break;
        case 24:
            printf("двадцать четвертое\r\n");
            break;
        case 25:
            printf("двадцать пятое\r\n");
            break;
        case 26:
            printf("двадцать шестое\r\n");
            break;
        case 27:
            printf("двадцать седьмое\r\n");
            break;
        case 28:
            printf("двадцать восьмое\r\n");
            break;
        case 29:
            printf("двадцать девятое\r\n");
            break;
        case 30:
            printf("тридцатое\r\n");
            break;
        case 31:
            printf("тридцать первое\r\n");
            break;
        default:
            printf("такого дня нет\r\n");
            return 0;
        }
        switch (m)
        {
        case 1:
            printf("января \r\n");
            break;
        case 2:
            printf("февраля\r\n");
            break;
        case 3:
            printf("марта\r\n");
            break;
        case 4:
            printf("апреля\r\n");
            break;
        case 5:
            printf("мая\r\n");
            break;
        case 6:
            printf("июня\r\n");
            break;
        case 7:
            printf("июля\r\n");
            break;
        case 8:
            printf("августа\r\n");
            break;
        case 9:
            printf("сентября\r\n");
            break;
        case 10:
            printf("октября\r\n");
            break;
        case 11:
            printf("ноября\r\n");
            break;
        case 12:
            printf("декабря\r\n");
            break;
        default:
            printf("такого месяца нет\r\n");
            return 0;
        }
    }