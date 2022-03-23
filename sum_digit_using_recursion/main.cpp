#include <iostream>
using namespace std;
int s(int num,int sum)
{
    if(num==0)
        return sum;
    sum+=num%10;
    return s(num/10,sum);

}
int main()
{
    int digit;
    cout<<"Enter digit ";
    cin>>digit;
    int sum=0;
    cout<<"Sum of digit is "<<s(digit,sum);
    return 0;
}
