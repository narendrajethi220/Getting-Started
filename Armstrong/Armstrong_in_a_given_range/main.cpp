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

void isArm(int start,int last)
{
    for(int i=start;i<=last;i++)
    {
        int temp,digit=0,arm=0;
        int len=order(i);
        temp=i;
        while(temp)
        {
            digit=temp%10;
            arm+=pow(digit,len);
            temp/=10;
        }
        if(arm==i)
        {

            cout<<i<<" ";
        }

    }

}
int main()
{
    int start,last;
    cout<<"Enter the start and last ";
    cin>>start>>last;
    isArm(start,last);
    return 0;
}
