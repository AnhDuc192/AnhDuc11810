#include <stdio.h>

void HNtower(int n, char a, char b, char c)
{
    if (n == 1)
        printf(" %c --> %c ", a, c);
    else
    {
        HNtower(n - 1, a, c, b);
        HNtower(1, a, b, c);
        HNtower(n - 1, b, c, a);
    }
}

int main()
{
    int n;
    printf("nhap so dia: ");
    scanf("%d", &n);
    char a = 'A', b = 'B', c = 'C';
    HNtower(n, a, b, c);
    return 0;
}