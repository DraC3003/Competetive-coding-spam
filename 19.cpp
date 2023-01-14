#include <iostream>
#include <vector>
using namespace std;
int solve(int x)
{
    vector<int> coins(1000000);
    vector<int> v(100000);
    vector<bool> r(100000);
    for (size_t i = 0; i < 3; i++)
    {
        cin >> coins[i];
    }
    if (x < 0)
    {
        return 1000;
    }
    if (x == 0)
    {
        return 0;
    }
    if (r[x])
    {
        return v[x];
    }
    int best = 1000;
    for (auto c : coins)
    {
        best = min(best, solve(x - c) + 1);
    }
    v[x] = best;
    r[x] = true;
    return best;
}
int main()
{
    int x;
    cin >> x;
    cout << solve(x);
}