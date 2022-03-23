#include <iostream>
using namespace std;
int main()
{
   int num1,num2,num3;
   cout<<"Enter all three numbers";
   cin>>num1>>num2>>num3;
   /*int largest=num1;
   using if else loop
   if(num2>largest && num2>num3)
   {

       largest=num2;
   }
   else
   {
    largest=num3;
   }
    cout<<"Largest number is "<<largest;*/
    /*using ternary operator*/
    int largest=num1>num2?(num1>num3)?num1:num2:(num2>num3)?num2:num3;
    cout<<largest;
    return 0;
}
