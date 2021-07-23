#include <iostream>
#include <algorithm>
using namespace std;
int Big(int x, int y, int z)
{
    int a[] = {x, y, z};
 
    sort(a, a + 3);
 
    for (int i = 0; i < 3; i++)
        cout << a[i] << "\n";
 
    return 0;
}
int main()
{
    long long x, y, z;
    cin >> x >> y >> z;
    Big(x, y, z);
    cout << "\n";
    cout << x << "\n"
         << y << "\n"
         << z;
}
