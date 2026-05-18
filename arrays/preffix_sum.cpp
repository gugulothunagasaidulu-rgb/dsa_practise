#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int runningsum=0;
for(int i=0;i<n;i++)
{
    int currentelement=arr[i];
    runningsum=runningsum+currentelement;
    cout<<runningsum<<" ";
}
return 0;
}