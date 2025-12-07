#include <iostream>
using namespace std;
int main()
{
    long n;
    cin>>n;
    long a[n];
    long i,j,k,p,max=0,min=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(j=1;j<n;j++)
    {
        for(k=0;k<n-j;k++)
        {
            if(a[k]>a[k+1])
            {
                swap(a[k],a[k+1]);
            }
        }
    }
    for(p=0;p<n;p++)
    {
        if(a[p]>p)
        {
            max=2*p-n;
            break;
        }
        else
        {
            if(a[p]<=max)
                max++;
            else
                max--;
        }
    }
    for(p=0;p<n;p++)
    {
        if(a[n-1-p]<-p)
        {
            min=n-2*p;
            break;
        }
        else
        {
            if(a[n-1-p]<=min)
                min++;
            else
                min--;
        }
    }
    cout<<max<<" "<<min;
    return 0;
}
