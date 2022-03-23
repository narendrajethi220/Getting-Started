#include <iostream>
using namespace std;
void fibonacci(int range)
{
   static int a=0,b=1,c;
   if(range>0)
   {
       c=a+b;
       a=b;
       b=c;
       cout<<c<<" ";
       fibonacci(range-1);
   }

}
int main()
{
    int n;
    cout<<"Enter the range ";
    cin>>n;
    cout<<"0 "<<"1 ";
    /*using for loop */

    /*int a=0;
    int b=1;
    int c;
    cout<<a<<" "<<b<<" ";
    for(int i=2;i<=n;i++)
    {
       c=a+b;
       cout<<c<<" ";
       a=b;
       b=c;
    }*/
    fibonacci(n);
    return 0;
}
