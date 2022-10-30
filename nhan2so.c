// nhân 2 số có n chữ số với thời gian < O(n^2)

#include <stdio.h>
#include <math.h>
int fastmult(int x, int y, int n)
{
    if (n == 1)
        return x * y;
    else
    {

        int m = n / 2;
        int k = pow(10, m);
        int a_1 = x / k;
        int a_2 = x % k;
        int b_1 = y / k;
        int b_2 = y % k;
        int e, f, g;
        e = fastmult(a_1, b_1, m);   // = a_1*b_1
        f = fastmult(a_2, b_2, m);  // = a_2*b_2
        g = fastmult(a_1 - a_2, b_1 - b_2, m); //  = C
        return pow(10, n) * e + pow(10, m) * (e + f - g) + f;
    }
}

int main()
{
    int a, b;
    printf("\nnhập a: ");
    scanf("%d", &a);
    printf("\nnhập b: ");
    scanf("%d", &b);
    int n;
    scanf("%d", &n);
    int kq = fastmult(a, b, n);
    printf("ket qua: %d", kq);
}