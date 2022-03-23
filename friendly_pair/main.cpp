#include <iostream>
#include<cmath>
using namespace std;
int s(int num)
{
    int sum=0;
    for(int i=2;i<sqrt(num);i++)
    {
        if(num%i==0)
        {
            if(i==num/i)
                sum+=i;
            else
                sum+=i+num/i;
        }
    }
    return sum;
}
void isFriendly(int a,int b)
{
    int s1=s(a);
    int s2=s(b);
    if(s1/a==s2/b)
        cout<<"Entered pair is Friendly pair";
    else
        cout<<"Not a friendly Pair";
}
int main()
{
    int num1;
    cout<<"Enter first number  ";
    cin>>num1;
    int num2;
    cout<<"Enter the second number ";
    cin>>num2;
    isFriendly(num1,num2);
    return 0;
}
