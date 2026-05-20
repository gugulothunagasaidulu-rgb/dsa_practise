// Swap first and last element of array
// Time Complexity: O(n)
// Space Complexity: O(1)
#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    int firstelement;
    int lastelement;
    int temp;
    for(int i=0;i<n;i++)
    {
        temp=arr[0];
        arr[0]=arr[n-1];
        arr[n-1]=temp;
        cout<<arr[i]<<" ";
    }

    return 0;
}