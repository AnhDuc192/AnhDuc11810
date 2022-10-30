#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[100][100], b[100][100];
void hoanvi()
{ // hoán vị mảng a[n][m] -->b[m][n]
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            b[i][j] = a[j][i];
        }
    }
}
void slove()
{
    for (int i = 1; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == 0)
            { // cột đầu tiên sẽ cộng với max của 2 thằng trên nó
                b[i][j] += max(b[i - 1][j], b[i - 1][j + 1]);
            }
            else if (j == n - 1)
            { // cột cuối cùng sẽ cộng với max của 2 thằng trên nó
                b[i][j] += max(b[i - 1][j - 1], b[i - 1][j]);
            }
            else
            { // cột bất kỳ sẽ cộng với max của 3 thằng ngay trên nó
                b[i][j] += max(b[i - 1][j - 1], max(b[i - 1][j], b[i - 1][j + 1]));
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    hoanvi();
    slove();
    int maxval = -1e9; // lưu giá trị max của hàng cuối cùng vì lúc này hàng cuối cùng sẽ chứa giá trị lớn nhất
    for (int i = 0; i < n; i++)
    {
        maxval = max(maxval, b[m - 1][i]);
    }
    cout << maxval;
}