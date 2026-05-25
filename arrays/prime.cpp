#include<iostream>
using namespace std;
int main()
{
    int n=6;
    bool prime=true;
    if (n<=1)
        {
        prime=false;
        }

        else{    
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
         prime=false;
         break;
        }
    }
}
if(prime)
{
    cout<<"prime number";
}
else
{
    cout<<"not prime number";
}
    
    return 0;
}