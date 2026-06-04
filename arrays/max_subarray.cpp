/*Time complexity:O(n)*/
/*space complexity:O(1)*/
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
    int arr[]={2,-1,9,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int currentsum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        currentsum=currentsum+arr[i];
        if(currentsum>maxsum)
        {
            maxsum=currentsum;
        }
        if(currentsum<0)
        {
            currentsum=0;
        }
    }
    cout<<maxsum<<" ";
    return 0;
}