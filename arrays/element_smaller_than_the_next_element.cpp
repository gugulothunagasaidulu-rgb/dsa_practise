/*
Problem: Elements Smaller Than Their Next Element

Approach:
- Traverse the array from index 0 to n-2
- Compare each element with its next element
- If arr[i] < arr[i+1], print arr[i]

Time Complexity: O(n)
Space Complexity: O(1)
*/
#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++)
    {
    if(arr[i]<arr[i+1])
    {
    cout<<arr[i]<<" ";
    }
    }
    return 0;
}