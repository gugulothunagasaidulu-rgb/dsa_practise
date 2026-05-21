#include<iostream>
using namespace std;
int main()
{
    int arr[]={22,11,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxleader=arr[n-1];
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]>maxleader)
        {
            maxleader=arr[i];
        }
    }
    cout<<maxleader<<" ";
    return 0;
}