#include <iostream>
#include<cmath>
using namespace std;
int sum(int n)
{
    int s=1;
    for(int i=2;i<sqrt(n);i++)
    {
      if(n%i==0)
      {
          if(i==n/i)
          {
              s+=i;
          }
          else
          {
              s+=i+n/i;
          }
      }
    }
    return s;
}
void isAbundant(int num)
{
    int s=sum(num);
   if(s>num)
      {
          cout<<"Entered number is abundant number"<<endl;
          cout<<"The Abundance is "<<s-num;
      }
   else
    cout<<"Entered number is not abundant number";
}
int main()
{
    int num;
    cout<<"Enter the number ";
    cin>>num;
    isAbundant(num);
    return 0;
}
