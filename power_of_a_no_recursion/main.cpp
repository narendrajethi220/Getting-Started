#include <iostream>
using namespace std;
int power(int n,int p)
{
    if(p>0)
      return (power(n,p-1)*n);
    else if(p<0)
        return (power(n,p+1)/n);
    else
       return 1;

}
return n;
}
int main()
{
    int num;
    cout<<"Enter the number ";
    cin>>num;
    int powr;
    cout<<"Enter the power ";
    cin>>powr;
    cout<<power(num,powr);
    return 0;
}
