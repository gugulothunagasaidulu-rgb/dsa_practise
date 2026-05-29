#include<iostream>
using namespace std;
int main()
{
    int arr[]={-1,-4,-3,-5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result[]={0,0,0,0,0};
    for(int i=0;i<=n-1;i++)
    {
        if(i<n-1 && abs(arr[i])<abs(arr[i+1]))
        {
            result[i]=arr[i];
        }
        cout<<result[i]<<" ";
    }
    return 0;
}