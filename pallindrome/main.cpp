#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter the digit ";
    cin>>num;
    int temp=num;
    int rev=0;
    while(temp)
    {
        int rem=temp%10;
        rev=rem+rev*10;
        temp/=10;
    }
    if(rev==num)
    {
        cout<<"Pallindrom";
    }
    else
    {
        cout<<"Not a Pallindrome";
    }

    return 0;
}
