#include <iostream>
#include<cmath>
using namespace std;
int isPrime(int n)
{
    if(n<2)
        return 0;
    else if(n==2)
        return 1;
    else if(n%2==0)
        return 0;
    for(int i=3;i<=sqrt(n);i+=2)
    {
        if(n%3==0)
            return 0;
    }
    return 1;
}
int main()
{
    int num;
    cout<<"Enter the number ";
    cin>>num;
    int temp=num;
    for(int i=2;i<=num;i++)
    {
        while(temp%i==0)
        {
           if(isPrime(i))
        {
            cout<<i<<" ";
        }
        temp/=i;
        }
    }
    return 0;
}
