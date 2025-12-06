#include <bits/stdc++.h>
using namespace std;
long f (long x );
int main()
{
    long T;
    cin>>T;
    long a[T][3];
    long i,j,k,p=0,n,b;
    long s,l,r;
    for(i=0;i<T;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    for(k=0;k<T;k++)
    {
        s=a[k][0];
        l=a[k][1];
        r=a[k][2];
        for(n=l;n<=r;n++)
        {
            if(f(n)!=f(s)*f(s))
            {
                for(b=1;f(s)*f(b)<=f(n);b++)
                {
                    if(f(n)==f(s)*f(b))
                    {
                        p++;
                        break;
                    }
                }
            }
            cout<<p;
        }
    }
    return 0;
}
long f (long x )
{
    return x*(x+1);
}
