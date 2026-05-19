
/*
Problem: Sort 0s, 1s and 2s (Dutch National Flag Algorithm)
Approach: Three pointers (low, mid, high)
Time Complexity: O(n)
Space Complexity: O(1)
*/
#include<iostream>
using namespace std;
int main()
{
    int arr[]={0,1,2,0,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int low=0;
    int mid=0;
    int high=n-1;
    int temp;
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            temp=arr[low];
            arr[low]=arr[mid];
            arr[mid]=temp;
            low++;
            mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else if(arr[mid]==2)
        {
          temp=arr[mid];
          arr[mid]=arr[high];
          arr[high]=temp;
          high--;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}