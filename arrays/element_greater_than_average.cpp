// Title: Elements Greater Than Average in an Array
// Time Complexity: O(n)
// Space Complexity: O(1)
// Approach: Calculate sum → find average → print elements greater than average
#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    int avg;
    int count=0;
    for(int i=0;i<n;i++)
    {   
        sum=sum+arr[i];
    }
    for(int j=0;j<n;j++)
    {
        int avg=sum/n;
    
    if(arr[j]>avg)
    {
        cout<<arr[j]<<" ";
        count++;
    }
    }
return 0;
}
