#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, x = 0;
        cin >> n >> a >> b;
        while (n > 1)
        {
            x++;
            n /= 2;
        }
        cout << x * a + (x - 1) * b << endl;
    }

    return 0;
}