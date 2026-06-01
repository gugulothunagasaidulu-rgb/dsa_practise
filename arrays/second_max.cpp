#include<iostream>
using namespace std;
int main()
{
    int arr[]={12,35,1,10,34,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=-1;
    int secondmax;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            secondmax=max;
            max=arr[i];
        }
    }
    cout<<secondmax<<" ";
    return 0;
}