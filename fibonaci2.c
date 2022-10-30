// dùng đệ quy có nhớ
#include <stdio.h>
#include <conio.h>
#define MAX 100
int a[MAX] = {0};

int fib(int n)
{
    // 2 giá trị cơ sở
    if (n < 2)
        return 1;
    // nếu bài toán chưa được giải    
    if (a[n] == 0){
        // a[n] = fib(n)
    a[n] = fib(n - 1) + fib(n - 2);
    }
    return a[n];
}
int main()
{
    int n;
    printf("nhap n: ");
    scanf("%d", &n);
    int k = fib(n);
    printf("so fibonaci thu %d la: %d", n, k);
    getch();
    return 0;
}