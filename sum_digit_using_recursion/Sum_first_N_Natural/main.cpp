#include <iostream>

using namespace std;

int main()
{
    int range;
    cout<<"Enter the Range";
    cin>>range;
    int i=1;
    int sum=0;
    while(i<=range)
    {
        sum+=i;
        i++;
    }
    cout<<sum;

    return 0;
}

