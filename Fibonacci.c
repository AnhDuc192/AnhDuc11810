// dùng quy hoạch động ( bottom up hay top down ) để rút ngắn thời gian
#include <stdio.h>

int fibonaci(int n)
{
    
        int a = 0, b = 1 ,c,i;
        if( n == 0) return a;
        for( i = 2 ;i <= n ; i++){
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }

int main(){
    int n;
    scanf("%d",&n);
    int kq = fibonaci(n);
    printf("%d",kq);
}