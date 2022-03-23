#include <iostream>
using namespace std;
int main()
{
  int year;
  cout<<"Enter the year";
  cin>>year;
  /*if( year %400==0 )
  {

      cout<<"Leap year";
  }
  else if(year%4==0 && year%100!=0)
  {
    cout<<"Leap year";
  }
  else
  {

      cout<<"Not a leap year";
  }*/
  /*using Ternary operator*/
   int flag=(year%400==0)||(year%4==0 && year%100!=0)?1:0;
   if(flag==1)
   {
       cout<<"Leap year";
   }
   else
   {
       cout<<"Not a leap year";
   }
    return 0;
}
