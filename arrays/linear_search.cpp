#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30,40};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=30;
    bool found=true;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
         cout<<"target is found";
        }
    }
    return 0;
}