#include <iostream>
using namespace std;
int sum(int n)
{
    if(n==1)
      {

          return n;
      }
    return n+sum(n-1);
}
int main()
{
    int range;
    cout<<"Enter the range";
    cin>>range;
    cout<<"Sum is "<<sum(range);
    return 0;
}
