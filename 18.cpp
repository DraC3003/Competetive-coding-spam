#include <iostream>
#include <math.h>
#include <vector>
#include <string>
using namespace std;
int solve(int x)
{
    int n;
    cin >> n;
    int best = 1000;
    vector<int> a(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (x < 0)
    {
        best = 1000;
    }
    else if (x == 0)
    {
        best = 0;
    }
    else if (x > 0)
    {
        for (auto i : a)
        {
            best = min(best, solve(x - i) + 1);
        }
    }
    cout << best;
    return 0;
}
int main()
{
    int x;
    cout << "enter number";
    cin >> x;
    solve(x);

    return 0;
}