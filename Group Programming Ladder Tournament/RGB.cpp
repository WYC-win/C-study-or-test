#include <iostream>
using namespace std;
int main()
{
    bool R,G,B;
    cin>>R>>G>>B;
    if(R&&G&&B)
        cout<<"White"<<endl;
    else if(R&&G&&!B)
        cout<<"Yellow"<<endl;
    else if(R&&!G&&B)
        cout<<"Magenta"<<endl;
    else if(!R&&G&&B)
        cout<<"Cyan"<<endl;
    else if(R&&!G&&!B)
        cout<<"Red"<<endl;
    else if(!R&&G&&!B)
        cout<<"Green"<<endl;
    else if(!R&&!G&&B)
        cout<<"Blue"<<endl;
    else
        cout<<"Black"<<endl;
    return 0;
}