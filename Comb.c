// tính tổ hợp chập k của n ( tabulation )
// bản chất: gán giá trị cho  1 mảng 1/2 chiều, n+1 dòng, n+1 cột, số phần tử cần lưu trữ là (n+1)^2/2
// độ phức tạp :O(n^2)
// nhanh hơn nhiều so với khi dùng đệ quy O(2^n)

#include<stdio.h>

int Comb( int n, int k){
    int c[n+1][n+1];
    c[0][0] = 1 ; 
    int i,j;
    for ( int i = 0 ; i <= n ; i++){
        c[i][0] = 1;
        c[i][i] = 1;
        for( int j = 0 ; j < i ; j++){
            c[i][j] = c[i-1][j-1] + c[i-1][j];
        }
    }
    return c[n][k];
}
    int main(){
        int n,k;
        printf("nhap n: ");scanf("%d",&n);
        printf("nhap k: ");scanf("%d",&k);
        int kq = Comb(n,k);
        printf("%d",kq);

    }
