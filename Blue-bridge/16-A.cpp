#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=2,i,p,count=0,count1=0;
    cin>>p;
    for(;count1<p;n++)
    {
        for(i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            count++;
        }
        if(count!=0)
        {
            count=0;
        }
        else
        {
            count1++;
            count=0;
        }
        if(count1==p)
        {
            cout<<n;
        }
    }
    return 0;
}