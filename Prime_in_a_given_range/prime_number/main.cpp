#include <iostream>
using namespace std;

int ifPrime(int n)
{
    if(n<=1)
    {
        return 0;
    }
    int i=2;
    for(i;i*i<=n;i++)
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
    cout<<"Enter the number";
    cin>>num;
        if(ifPrime(num))
        {
            cout<<"Prime number";
            return 0;
        }
         else{
            cout<<"Not a prime numer";
            return 0;
         }


    return 0;
}
