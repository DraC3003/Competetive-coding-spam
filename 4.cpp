#include <iostream>
#include <string>
using namespace std;
int main()
{

    int n;
    cout << "enter the number of letter u want in the alphabet:";
    cin >> n;
    char i = 65;
    if (n <= 26)
    {
        for (int l = 0; l < n; l++)
        {
            cout << i << " ";
            i++;
        }
    }
    else if (n > 26)
    {
        char o = 65;
        char x = 2;
        for (int k = 0; k < 26; k++)
        {
            cout << o << " ";
            o++;
        }
    }
    return 0;
}