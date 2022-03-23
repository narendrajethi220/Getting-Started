#include <iostream>

using namespace std;

int main()
{
    int num1;
    cout<<"Enter num1";
    cin>>num1;
    int num2;
    cout<<"Enter num2";
    cin>>num2;
    /*using if else loop
    if(num1>num2)
    {

        cout<<"Num1 is greater";
    }
    else
    {

        cout<<"num2 is greater";
    }*/
    /* using ternary */
    num1>num2?cout<<"num1 is greater":cout<<"num2 is greater";
    return 0;
}
