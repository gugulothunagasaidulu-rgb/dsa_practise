#include<iostream>
using namespace std;
int main()
{
    int num=3;
    int exponent=3;
    int result=1;
    for(int i=1;i<=exponent;i++)
    {
       result=num*result;
    }
    cout<<result<<" ";
    return 0;
}