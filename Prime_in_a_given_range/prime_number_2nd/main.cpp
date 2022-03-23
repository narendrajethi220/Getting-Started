#include <iostream>
using namespace std;
int isPrime(int n)
{
    if(n<2)
        return 0;
    else if(n%2==0)
        return 0;
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int num;
    cout<<"Enter the num";
    cin>>num;
    if(isPrime(num))
    {
      cout<<"Prime";
    }
    else
    {

        cout<<"Not a Prime";
    }
    return 0;
}
