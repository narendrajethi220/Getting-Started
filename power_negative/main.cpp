#include <iostream>
using namespace std;

int main()
{
    double num;
    cout<<"Enter the number ";
    cin>>num;
    int powr;
    cout<<"Enter the power";
    cin>>powr;
    double res=1.0;
    while(powr>0)
    {
        res*=num;
        powr--;
    }
    while(powr<0)
    {
        res/=num;
        powr++;
    }
    cout<<res<<" ";
    return 0;
}
