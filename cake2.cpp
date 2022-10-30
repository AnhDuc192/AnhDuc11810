#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    int n, s;
    cin >> n >> s;
    int a[n];
    int minval = 1e9; // lưu giá trị min trong mảng a[n]
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        minval = min(minval, a[i]);
    }

    vector<int> dp(s + 1, 0); // tạo vector có(s+1) phàn tử đều là 0
    // QUY HOẠCH ĐỘNG
    dp[0] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = s; j >= a[i]; j--)
        {
            if (dp[j - a[i]])
            {
                dp[j] = 1;
            }
        }
    }

    if (minval > s)
    { // kiểm tra xem phần tử nhỏ nhất trong mảng mà lớn hơn s thì in ra 0
        cout << 0;
    }

    // duyệt từ s về để tìm số lớn gần nhất hoặc bằng s
    for (int i = s; i >= minval; i--)
    {
        if (dp[i])
        {
            cout << i;
            break;
        }
    }
}