#include <iostream>
#include <vector>
using namespace std;
const double pi = 3.1415921;
class cylinder
{
public:
    double r = 3;
    double h = 6;

public:
    double volume()
    {
        return pi * r * r * h;
    }
};
int main(int argc, char **argv)
{
    cylinder c1;
    cylinder c2;
    double x, y, z, w;
    cin >> x >> y >> z >> w;
    c1.r = x;
    c2.r = y;
    c1.h = z;
    c2.h = w;
    cout << c1.volume() << endl;
    cout << c2.volume() << endl;
    return 0;
}