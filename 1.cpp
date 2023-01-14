#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k = 0;
    for (int b = n / 2; b >= 1; b /= 2)
    {
        while (!a[k + b])
        {
            k += b;
        }
    }
    int x = k + 1;
    cout << x;
    return 0;
}
