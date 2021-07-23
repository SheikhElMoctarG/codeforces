#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
 
    if (l2 > r1 or l1 > r2)
    {
        cout << -1;
    }
    else
    {
        long s = max(l1, l2);
        long d = min(r1, r2);
        cout << s << " " << d;
    }
}
