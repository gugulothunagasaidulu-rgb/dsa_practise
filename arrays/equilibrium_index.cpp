#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int totalsum=0;
    int leftsum;
    int rightsum;
    int equilibriumindex;
    for(int i=0;i<n;i++)
    {
        totalsum=totalsum+arr[i];
    }
    leftsum=0;
    for(int j=0;j<n;j++)
    {
    int currentelement=arr[j];
    rightsum=totalsum-leftsum-currentelement;
    if(leftsum==rightsum)
    {
        equilibriumindex=j;
        cout<<equilibriumindex<<" ";

    }
    
    leftsum=leftsum+arr[j];

    }
    cout<<"no equilibrium index found"<<" ";

    
    return 0;
}