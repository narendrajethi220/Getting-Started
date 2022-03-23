#include <iostream>
#include<cmath>
using namespace std;
void factor(int n)
{
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(i==n/i)
            {

                cout<<i<<" ";
            }
            else
            {
                cout<<i<<" "<<n/i<<" ";
            }
        }
    }
}
int main()
{
    int num;
    cout<<"Enter the number ";
    cin>>num;
    factor(num);
    return 0;
}
