// lab4_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    float a, b, suma_b;
    printf("Введите a и b:");
    scanf_s ("%F", &a);
    scanf_s ("%F", &b);
    suma_b = a + b;
   
        printf("Произведение чисел a и b = %F\n", suma_b);
    



    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
