#include <iostream>
using namespace std;
int main()
{
    long n;
    cin >> n;
    cout << n / 365 << " years\n"
         << (n % 365) / 30 << " months\n"
         << n % 365 % 30 << " days";
}
