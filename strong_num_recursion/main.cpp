#include <iostream>
using namespace std;

int factor(int num)
{
    if(num==1)
        return 1;
    return num*factor(num-1);
}

int main()
{
    int num;
    cout<<"Enter the number ";
    cin>>num;
    int temp=num;
    int sum=0;
    while(temp)
    {
        int rem=temp%10;
        sum+=factor(rem);
        temp/=10;
    }
    if(sum==num)
    {

        cout<<"Entered number is strong number";
    }
    else
    {
        cout<<"Not a Strong number";
    }
    return 0;
}
