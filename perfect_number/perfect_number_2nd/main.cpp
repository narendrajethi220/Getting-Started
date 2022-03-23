#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number ";
    cin>>num;
    int sum=1;
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            if(i==num/i)  // for duplicates like
            {
                sum+=i;
            }
            else
            {
                sum+=i+num/i;
            }
        }
    }
    if(sum==num)
    {
       cout<<" It's a perfect number ";
    }
    else
    {
        cout<<" Not a perfect number ";
    }
    return 0;
}
