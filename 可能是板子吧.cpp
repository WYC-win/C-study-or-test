#include <iostream>
#include <climits>
using namespace std;
int main()
{
    long n,q;
    cin>>n>>q;
    long a[n];
    long i,j,k,l,r,p,s;
    long b[q][2];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(j=0;j<q;j++)
    {
    	for(p=0;p<2;p++)
    	{
    		cin>>b[j][p]; //输入 l r 
		}
    }
    for(j=0;j<q;j++)
    {
    	l=b[j][0];
    	r=b[j][1];
    	long tem1=LONG_MAX;
    	for(k=l-1;k<r;k++)
    	{
    		if(a[k]<tem1) //求最小值 
    		{
    			tem1=a[k];
			}
		}
		//cout<<tem1;
		long tem2=LONG_MAX;
		for(s=l-1;s<r;s++)
    	{
    		if((a[s]<tem2)&&(a[s]!=tem1))//求次最小值 
    		{
    			tem2=a[s];
			}
		}
		if(tem2!=LONG_MAX)
		{
			long min1=tem2;
			cout<<tem2<<endl;
		}
		else
		{
			cout<<-1<<endl; 
		}
		
    }
	return 0;
}
