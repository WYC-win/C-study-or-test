#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    double p;
    p=(a+b+c)*0.5;
    double res;
    res=sqrt(p*1.0*(p-a)*(p-b)*(p-c));
    cout<<fixed<<setprecision(1)<<res;
    return 0;
}