#include <iostream>

using namespace std;

int main()
{
    int start;
    cout<<"Enter the start";
    cin>>start;
    int range;
    cout<<"Enter the end";
    cin>>range;
    int sum=0;
    sum=(((range)*(range+1))/2)-(((start)*(start+1))/2)+start;
    cout<<sum;
    return 0;
}
