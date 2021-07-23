#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
    long double A,B,C,D;
    cin>>A>>B>>C>>D;
 
    long double new_B = B/10000000000000;
    long double new_D = D/10000000000000;
    
    if (pow(A,new_B)> pow(C,new_D))
        cout<<"YES";
    else
        cout<<"NO";
 
 
    return 0;
}
