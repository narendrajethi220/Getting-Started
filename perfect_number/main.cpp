#include <iostream>
using namespace std;
int sum(int num)
{
    int sum=1;
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
            sum+=i;
    }

    return sum;
}

int main()
{
    int num;
    cout<<"Enter the number ";
    cin>>num;
    int s=sum(num);
    if(s==num)
        cout<<"Perfect Number";
    else
        cout<<"Not a Perfect Number ";
    return 0;
}
