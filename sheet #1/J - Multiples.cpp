#include <iostream>
using namespace std;
int main()
{
    long long x, y;
    cin >> x >> y;
    int temp = 0;
    if (y > x)
    {
        int temp = y;
        y = x;
        x = temp;
    }
    if (x % y == 0)
    {
        cout << "Multiples";
    }
    else if (x % y != 0)
    {
        cout << "No Multiples";
    }
}
