#include <iostream>
#define max 100
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number of which you want factor ";
    cin>>num;
    int i=1;
    while(i<=num)
    {
        if(num%i==0)
        {
            cout<<i<<" ";

        }
        i++;
    }
    return 0;
}
