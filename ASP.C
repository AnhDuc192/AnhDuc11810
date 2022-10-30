#include <bits/stdc++.h>
#define int long long
#define task "activity_selection."

using namespace std;

const int maxn = 1e5 + 10;
int n;
pair < int, int > activity[maxn];

void enter()
{
    cin >> n;

    for (int i = 1; i <= n; ++i)
        cin >> activity[i].first >> activity[i].second;
}

bool cmp(pair < int, int > a, pair < int, int > b)
{
    return a.second < b.second;
}

void solution()
{
    sort(activity + 1, activity + n + 1, cmp);

    int res = 1;
    int last_index = 1;
    for (int i = 2; i <= n; ++i)
        if (activity[i].first >= activity[last_index].second)
        {
            last_index = i;
            ++res;
        }

    cout << res;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    enter();
    solution();

    return 0;
}
