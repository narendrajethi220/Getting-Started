#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    if(num==0)
        cout<<"Zero";else num>0?cout<<"Positive":cout<<"Negative";
    return 0;
}
