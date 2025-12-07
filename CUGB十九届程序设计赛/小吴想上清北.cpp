#include <iostream>
using namespace std;
int main()
{
    long n;
    cin>>n;
    char a[n+1];
    int i,j,k=0,p=0,q;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(j=0;j<n;j++)
    {
        if((a[j]=='q')&&
		(a[j+1]=='i')&&
		(a[j+2]=='n')&&
		(a[j+3]=='g')&&
		(a[j+4]=='h')&&
		(a[j+5]=='u')&&
		(a[j+6]=='a'))
        {
            k=k+1;
        }
        if((a[j]=='b')&&(a[j+1]=='e')&&(a[j+2]=='i')&&(a[j+3]=='d')&&(a[j+4]=='a'))
        {
            p=p+1;
        }
    }
    q=k+p;
    cout<<q;
    return 0;
}
