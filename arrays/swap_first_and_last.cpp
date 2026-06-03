#include<iostream>
using namespace std;
int main()
{
int arr[]={12,13,14,15};
int n=sizeof(arr)/sizeof(arr[0]);
int first=arr[0];
int last=arr[n-1];
for(int i=0;i<n;i++)
{
    if(arr[i]==arr[0])
    {
        arr[0]=last;
    }
    else
    {
        arr[n-1]=first;
    }
    cout<<arr[i]<<" ";
}
return 0;
}