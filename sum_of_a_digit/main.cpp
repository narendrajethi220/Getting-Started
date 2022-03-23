#include <iostream>
using namespace std;
int main()
{
    int digit;
    cout<<"Enter the digit ";
    cin>>digit;
    int sum=0;
    while(digit)
    {
        int rem=digit%10;
        sum+=rem;
        digit/=10;
    }
    cout<<"sum is "<<sum;

    return 0;
}
