#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number ";
    cin>>num;
    int power;
    cout<<"Enter the power ";
    cin>>power;
    int n=1;
    while(power)
    {
        n*=num;
        power--;
    }
        cout<<n;
    return 0;
}
