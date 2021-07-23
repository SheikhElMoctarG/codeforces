#include <iostream>
using namespace std;
int main()
{
    double x;
    cin >> x;
    if (x >= 0 and x <= 25.0)
    {
        cout << "Interval [0,25]";
    }
    else if (x >= 25.0 and x <= 50.0)
    {
        cout << "Interval (25,50]";
    }
    else if (x >= 50 and x <= 75)
    {
        cout << "Interval (50,75]";
    }
    else if (x >= 75 and x <= 100)
    {
        cout << "Interval (75,100]";
    }
    else
    {
        cout << "Out of Intervals";
    }
}
