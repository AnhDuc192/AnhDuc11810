
/* bài toán đếm số cách khác nhau để phân hoạch tập phần tử thành các tập khác rỗng
   ( Let S(n, k) be total number of partitions of n elements into k sets. 
   The value of n’th Bell Number is sum of S(n, k) for k = 1 to n. )
      công thức tính truy hồi : S(n+1,k) = k*S(n,k) + S(n,k-1) 

    Bell(n,k) là số cách chia tập {1,2,...,n+1} với tập con có nhiều nhất k+1 phần tử
     số phân hoạch cần tính = S(n,0) +  S(n,1) + ... + S(n,n) ( chắc thế ==)) ) */
/* 1
   1 2        tam giác Bell: bell[i][j] = bell[i - 1][j - 1] + bell[i][j - 1]
   2 3 5      cthuc này sẽ dùng trong cách dùng quy hoạch động
   5 7 10 15
   15 20 27 37 52 */
#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    int s[n+1][n+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<n+1;j++){
            if(j>i) s[i][j]=0;
            else if(i==j) s[i][j]=1;
            else if(i==0 || j==0) s[i][j]=0;
            else{
                 
                s[i][j]= j*s[i-1][j] + s[i-1][j-1];
            }
             
        }
    }
    int ans=0;
    for(int i=0;i<n+1;i++){
        ans += s[n][i];
    }
    cout<<ans;
     
     
    return 0;
}