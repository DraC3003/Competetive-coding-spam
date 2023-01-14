#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(k);
    for (size_t i = 0; i < k; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int cat = 0;
    int mouse = k - 1;
    int count = 0;
    while (cat <= mouse)
    {
        if (a[mouse] + 1 == n)
        {
            count++;
            mouse--;
        }
        else if (a[mouse] + 1 != n)
        {
            ++a[mouse];
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}