#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int i = 0;
        while (n > 1)
        {
            n /= 2;
            i++;
        }
        int time = i * a + (i - 1) * b;
        cout << time;
    }
}