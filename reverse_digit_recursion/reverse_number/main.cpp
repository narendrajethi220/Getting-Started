#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number";
    cin>>num;
    int rev=0;
    while(num)
    {
      int rem=num%10;
      rev=rem+rev*10;
      num/=10;
    }
    cout<<rev;
    return 0;
}
