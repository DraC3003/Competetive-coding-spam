#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <tuple>
using namespace std;
void solve()
{
    vector<pair<int, int>> v;
    v.push_back({1, 5});
    v.push_back({2, 3});
    v.push_back({1, 2});
    sort(v.begin(), v.end());
    vector<tuple<int, int, int>> a;
    a.push_back({2, 1, 4});
    a.push_back({1, 5, 3});
    a.push_back({2, 1, 3});
    sort(a.begin(), a.end());
    for (auto i : v)
    {
        cout << i.first << " " << i.second << " " << endl;
    }
    // you can sort a vector in reverse also with .rbegin() and .rend();
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