#include <iostream>
using namespace std;
int order(int num)
{
  int len=0;
  while(num)
  {
      len++;
      num/=10;
  }
  return len;
}

int rem(int num,int len)
{
    int n=0;
    int digit=1;
    while(len)
    {
     digit*=10;
     len--;
    }
   n=num%digit;
    return n;
}

int main()
{
    int num;
    cout<<"Enter the number ";
    cin>>num;
    int sq=num*num;
    int len=order(num);
    int no=rem(sq,len);
    if(no==num)
    {
        cout<<"Automorphic Number ";
    }
    else
    {

        cout<<"Not a Automorphic Number ";
    }

    return 0;
}
