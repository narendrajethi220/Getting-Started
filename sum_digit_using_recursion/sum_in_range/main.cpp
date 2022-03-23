#include <iostream>
using namespace std;

int main()
{
    int start;
    cout<<"Enter the start";
    cin>>start;
    int range;
    cout<<"Enter the range";
    cin>>range;
    int sum=0;
    for(int i=start;i<=range;i++)
    {
        sum+=i;

    }
    cout<<sum;

    return 0;
}
