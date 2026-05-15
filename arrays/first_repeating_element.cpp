#include<iostream>
using namespace std;
int main()
{
int arr[]={1,2,3,5,5,6,3};
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if(arr[i]==arr[j])
        {
        cout<<arr[i]<<" ";
        return 0;
        }   
    }
}
return 0;
}
