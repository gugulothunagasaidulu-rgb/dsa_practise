/*
-----------------------------------
Problem          : Pair Sum
Approach         : Nested Loops (Brute Force)

Time Complexity  : O(n^2)
Space Complexity : O(1)

Explanation:
- Two loops are used to check all pairs
- No extra array or data structure used
-----------------------------------
*/
#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=3;
    int pair=(0);

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
        if(arr[i]+arr[j]==target)
        {
            cout<<arr[i]<<" "<<arr[j]<<" ";
            pair++;
        }
        }
    }
    cout<<"totalpairs="<<pair;
 return 0;
}

    
