//Time Complexity: O(n)  -> Linear Time
//Space Complexity: O(1) -> Constant Space
#include<iostream>
using namespace std;
int main()
{
    int x=0;
    int arr[]={1,2,2,1,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        x=x^arr[i];
    }
    cout<<x<<" ";
    return 0;
}
