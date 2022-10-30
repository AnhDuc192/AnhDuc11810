#include <stdio.h>
#include <math.h>
#include<stdbool.h>
int a[20];
bool ok(int x2, int y2)
{
    for (int i = 1; i < x2; i++)
        if (a[i] == y2 || abs(i - x2) == abs(a[i] - y2))
            return false;
    return true;
}
void xuat(int n)
{
    // in ra 1 kết quả
    for (int i = 1; i <= n; i++)
        printf("%d", a[i]);
    printf("\n");
}

void Try(int i, int n)
{
    for (int j = 1; j <= n; j++)
    {
        if (ok(i, j))
        {
            a[i] = j;

            if( i == n) xuat(n);
            Try(i+1,n);
        }
    }
}
int main(){
    int n = 8;// 8 quân hậu trên bàn 8*8
    Try(1,n);
    
    return 0;
}