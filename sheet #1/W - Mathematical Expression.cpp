#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    char d, s;
    cin >> a >> d >> b >> s >> c;
    if (d == 42)
    {
        if (a * b == c)
        {
            cout << "Yes";
        }
        else
        {
            cout << a * b;
        }
    }
    else if (d == 43)
    {
        if (a + b == c)
        {
            cout << "Yes";
        }
        else
        {
            cout << a + b;
        }
    }
    else if (d == 45)
    {
        if (a - b == c)
        {
            cout << "Yes";
        }
        else
        {
            cout << a - b;
        }
    }
}
