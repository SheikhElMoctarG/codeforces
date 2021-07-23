#include<bits/stdc++.h>
using namespace std;
int main (){
char a;
cin>>a;
if(a>='a' && a<='z')cout<<"ALPHA\n"<<"IS SMALL";
else if(a>='A' && a<='Z')cout<<"ALPHA\n"<<"IS CAPITAL";
else cout<<"IS DIGIT";
}
