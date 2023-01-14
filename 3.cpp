#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    a.push_back(3);
    a.push_back(2);
    a.push_back(56);
    a.push_back(pow(2, 4));
    for (auto i : a)
    {
        cout << i << "\n";
    }
    return 0;
}