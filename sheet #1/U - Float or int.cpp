#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double num;
    cin >> num;
    int n = (int)num;
    float n1 = (float)n;
    double z = (num - n1);
    if (num == (int)num)
    {
        cout << "int " << num;
    }
    else
    {
        cout << "float "<<(int)num<<" " << setprecision(3) << z;
    }
}
