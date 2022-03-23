#include <iostream>
using namespace std;

int main()
{
    int no;
    cout<<"Enter the number ";
    cin>>no;
    int a=0;
    int b=1;
    int nth;
    for(int i=2;i<no;i++)
    {
      nth=a+b;
      a=b;
      b=nth;
    }
    cout<<nth;
    return 0;
}
