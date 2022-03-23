#include <iostream>
using namespace std;
int sum(int num)
{
    int sum=0;
    while(num)
    {
        int rem=num%10;
        sum+=rem;
        num/=10;
    }
    return sum;
}
void isHarshad(int num)
{
    int s=sum(num);
    if(num%s==0)
        cout<<"Entered number is harshad number ";
    else
        cout<<"Entered number is not a harshad number ";
}
int main()
{
    int num;
    cout<<"Enter the number ";
    cin>>num;
    isHarshad(num);
    return 0;
}
