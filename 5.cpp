#include <iostream>
#include <bitset>
#include <math.h>
using namespace std;
int main()
{
    double i;
    cout << "enter the integer:" << endl;
    cin >> i;

    cout << bitset<16>(i);
    return 0;
}