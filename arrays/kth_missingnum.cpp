#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,3,4,7,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    int left=0;
    int right=n-1;
    int k=5;
    while(left<=right)
    {
        int mid=left+(right-left)/2;
        int missingnumber=arr[mid]-(mid+1);
        if(missingnumber<k)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    cout<<left+k<<" ";
}