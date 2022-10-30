// cũng là bell number nhưng thêm tí quy hoạch động
// độ phức tạp vẫn là O(n^2)
// A C++ program to find n'th Bell number
// bell[i][j] = bell[i - 1][j - 1] + bell[i][j - 1];

#include <iostream>
using namespace std;

int bellNumber(int n)
{
    int bell[n + 1][n + 1];
    bell[0][0] = 1;
    for (int i = 1; i <= n; i++)
    {
        // Explicitly fill for j = 0
        bell[i][0] = bell[i - 1][i - 1];

        // Fill for remaining values of j
        for (int j = 1; j <= i; j++)
            bell[i][j] = bell[i - 1][j - 1] + bell[i][j - 1];
    }
    return bell[n][0]; // số cách phân hoạch tập {1,2,...,n} thành các tập không rỗng
}

// Driver program
int main()
{
    int i;
    int n;
    cin >> n;
    {
        for (int i = 0; i <= n; i++)
            cout << "Bell Number " << i << " is "
                 << bellNumber(i) << endl;
        return 0;
    }
}