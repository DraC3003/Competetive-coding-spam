#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int binarysearch(vector<int> num, int target)
{
    if (num.size() == 0)
    {
        return -1;
    }
    int left = 0;
    int right = num.size() - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (target == num[mid])
        {
            return mid;
        }
        if (target > num[mid])
        {
            left = mid + 1;
        }
        else if (target < num[mid])
        {
            right = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int x;
    cin >> x;
    vector<int> a(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    cout << binarysearch(a, x);
    return 0;
}
