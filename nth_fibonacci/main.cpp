#include <iostream>
using namespace std;
int fib(int nth)
{
    if(nth<=1)
        return nth;
    return fib(nth-1)+fib(nth-2);
}
int main()
{
    int num;
    cout<<"Enter the number ";
    cin>>num;
    cout<<fib(num);
    return 0;
}
