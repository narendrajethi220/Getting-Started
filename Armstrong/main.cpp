#include<iostream>
#include<cmath>
using namespace std;
int order(int n)
{

    int len=0;
    while(n)
    {
        len++;
        n/=10;
    }
    return len;
}

int main()
{
    int num;
    cout<<"Enter the number ";
    cin>>num;
    int arm=0;
    int len=order(num);
    int temp=num;
    while(temp)
    {
        int rem=temp%10;
        arm+=pow(rem,len);
        temp/=10;

    }
    if(arm==num)
    {
        cout<<"Armstrong number";
    }
    else{
        cout<<"Not an Armstrong number";
    }
    return 0;
}
