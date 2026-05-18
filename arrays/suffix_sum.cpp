#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int runningsum=0;
    int suffixsum[100];
    for(int i=n-1;i>=0;i--)
    {
        int currentelement=arr[i];
        runningsum=runningsum+currentelement;
        suffixsum[i]=runningsum;
    }
    for(int i=0;i<n;i++)
    {
        cout<<suffixsum[i]<<" ";
    }
    return 0;
}