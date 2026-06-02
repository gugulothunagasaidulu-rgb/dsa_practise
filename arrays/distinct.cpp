#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int distinct;
    for(int i=0;i<=n-1;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            distinct=arr[i];
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}