#include<iostream>
using namespace std;
int main()
{
    int num=15;
    int divisible;
    if(num%3==0 && num%5==0)
    {
        cout<<"both the numbers are divisible ";
    }
    else
    {
        cout<<"not divisible";
    }
    return 0;
}