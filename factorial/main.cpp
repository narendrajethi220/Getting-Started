#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter the number ";
    cin>>num;
    int fib=1;
    while(num)
    {
     fib=fib*num;
     num--;
    }
    cout<<fib;
    return 0;
}
