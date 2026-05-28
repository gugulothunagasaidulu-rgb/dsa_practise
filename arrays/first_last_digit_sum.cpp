Time Complexity  : O(log n)
Space Complexity : O(1)
#include<iostream>
using namespace std;
int main()
{
    int num;
    num=1234;
    int sum=0;
    int firstdigit;
    int lastdigit;
    lastdigit=num%10;
    while(num>=10)
    {
       num=num/10; 
    }
    firstdigit=num;
    sum=firstdigit+lastdigit;
    cout<<sum<<" ";
}