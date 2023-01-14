#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
void solution()
{
    int n, b;
    cin >> n >> b;

    vector<int> w(n);
    vector<int> h(n);
    vector<int> p(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> w[i] >> h[i] >> p[i];
        cout << endl;
    }

    vector<int> a(n);
    for (size_t i = 0; i < n; i++)
    {
        a[i] = h[i] * w[i];
    }
    map<int, int> result;
    for (size_t i = 0; i < n; i++)
    {
        result[a[i]] = p[i];
    }
    // map sorts .i.first automatically
    int area = 0;
    for (auto i : result)
    {
        int x = b - i.second;
        if (x < 0)
        {
            continue;
        }
        if (x >= 0)
        {
            area = i.first;
        }
    }
    if (area == 0)
    {
        cout << "no tablet" << endl;
    }
    else
    {
        cout << area << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}