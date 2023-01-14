#include <iostream>
#include <vector>
using namespace std;
int solve(vector<int> coins, int x)
{
    vector<int> a(x + 1, INT_MAX);
    a[0] = 0;
    for (size_t i = 1; i <= x; i++)
    {
        for (auto j : coins)
        {
            if (j <= i)
            {
                int b = a[i - j];
                if (a[i - j] != INT_MAX && b + 1 < a[i])
                {
                    a[i] = b + 1;
                }
            }
        }
    }
    return a[x];
}
void solve1()
{
    int x, n;
    cin >> x >> n;
    vector<int> coins(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    cout << solve(coins, x) << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve1();
    }
}