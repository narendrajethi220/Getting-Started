#include <iostream>
#include<cmath>
using namespace std;
int isPrime(int n)
{
    if(n<2)
        return 0;
    if(n==2)
        return 1;
    if(n%2==0)
        return 0;
    int i;
    for(i=3;i<=sqrt(n);i+=2)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int range;
    cout<<"Enter the range ";
    cin>>range;
    for(int i=2;i<=range;i++)
    {
        if(isPrime(i))
        {

            cout<<i<<" ";
        }
    }
    return 0;
}
