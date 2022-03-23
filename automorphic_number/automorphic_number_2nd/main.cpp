#include <iostream>
using namespace std;

int isAutomporphic(int n)
{
  int sq=n*n;
  while(n)
  {
    if(n%10!=sq%10)
            return 0;

    n/=10;
    sq/=10;
  }
  return 1;
}

int main()
{
    int num;
    cout<<"Enter the number ";
    cin>>num;
    if(isAutomporphic(num))
            cout<<"Entered number is Automorphic ";
    else
        cout<<"Entered number is not Automorphic ";
    return 0;
}
