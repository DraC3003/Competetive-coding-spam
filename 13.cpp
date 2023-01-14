#include <iostream>
#include <map>
#include <vector>
using namespace std;
void solve()
{
    int r, c;
    cin >> r >> c;
    int **x = new int *[r];
    for (size_t i = 0; i < r; i++)
    {
        x[i] = new int[c];
        for (size_t j = 0; j < c; j++)
        {
            cin >> x[i][j];
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
    return 0;
}