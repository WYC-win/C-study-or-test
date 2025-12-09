#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a;
    cin>>a;
    int tem;
    tem=a;
    //cout<<tem<<endl;
    int g,s,b;
    double f;
    f=(a-tem*1.0)*10.0;
    b=tem/100;
    s=tem%100/10;
    g=tem%10;
    double res=f+b*1.0/1000+s*1.0/100+g*1.0/10;
    cout<<res;
    return 0;
}