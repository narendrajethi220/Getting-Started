#include <iostream>
using namespace std;

int fact(int n)
{
    int num=1;

    for(int i=1;i<=n;i++)
    {
      num*=i;

    }
    return num;
}

int main()
{
    int num;
    cout<<"Enter the number ";
    cin>>num;
    int sum=0;
    int temp=num;
    while(temp)
    {
        int rem=temp%10;
        sum+=fact(rem);
        temp/=10;
    }
    if(sum==num)
    {
        cout<<"It is a strong number ";
    }
    else{
        cout<<"It is not a strong number ";
    }
    return 0;
}
