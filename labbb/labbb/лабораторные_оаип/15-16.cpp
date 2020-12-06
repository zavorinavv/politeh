#include <stdio.h>
#include <math.h>
#include <locale.h>
using namespace std;

void lab(int* A, int l, int r)
{
    int x;
    int l1 = l;
    int r1 = r;
    x = A[l];
    for (; l < r; )
    {
        for (; (A[r] >= x) && (l < r);)
            r--;
        if (l != r)
        {
            A[l] = A[r];
            l++;
        }
        for (; (A[l] <= x) && (l < r);)
            l++;
        if (l != r)
        {
            A[r] = A[l];
            r--;
        }
    }
    A[l] = x;
    x = l;
    l = l1;
    r = r1;
    if (l < x)
        lab(A, l, x - 1);
    if (r > x)
        lab(A, x + 1, r);
}
int main()
{
    int a[] = { 2, 9, 1, 7, 3, 0, 33, 56, -4 };
    int n = sizeof(a) / sizeof(int);

    lab(a, 0, n - 1);

    for (int i = 0; i < n; i++)
        printf("%d \n", a[i]);
    return 0;
}
