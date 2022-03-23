#include <iostream>
using namespace std;

int sum(int x,int y)
{
   if(y==x)
   {
       return x;
   }
   return y+sum(x,y-1);
}
int main()
{
    int start;
    cout<<"Enter the start";
    cin>>start;
    int range;
    cout<<"Enter the end";
    cin>>range;
    cout<<"Sum of the given range "<<sum(start,range);
    return 0;
}
