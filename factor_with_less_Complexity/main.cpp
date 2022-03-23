#include <iostream>
#include<cmath>
#include<vector>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number ";
    cin>>num;
    vector<int> vc;
    for(int i=1;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            if(i==num/i)
            {
                cout<<i<<" ";
            }
            else{
                cout<<i<<" ";
                vc.push_back(num/i);
            }
        }
    }
    for(int i=vc.size()-1;i>=0;i--)
    {
        cout<<vc[i]<<" ";

    }
    return 0;
}
