#include <iostream>
using namespace std;
int r(int num,int rev)
{
  if(num==0)
     return rev;
  int rem=num%10;
  rev=rem+rev*10;
  return r(num/10,rev);



}
int main()
{
    int num;
    cout<<"Enter the digit ";
    cin>>num;
    int rev=0;
    cout<<"Reverse of number is "<<r(num,rev);

    return 0;
}
