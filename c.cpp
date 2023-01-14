#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        long long sum1 = 0;
        long long sum2 = 0;
        cin >> n;
        for (size_t i = 0; i <= n; i++)
        {
            sum1 += i * i;
        }
        for (size_t i = 0; i <= n; i++)
        {
            sum2 += i * i * i;
        }
        cout << sum2 - sum1 << endl;
    }
    return 0;
}