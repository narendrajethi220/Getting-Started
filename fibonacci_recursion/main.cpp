#include <iostream>
using namespace std;
int fib(int num)
{
    if(num<=1)
       return num;
    return fib(num-1)+fib(num-2);

}

int main()
{
    int range;
    cout<<"Enter the range ";
    cin>>range;
    for(int i=0;i<range;i++)
 {
   cout<<fib(i)<<" ";
  }
    return 0;
}
