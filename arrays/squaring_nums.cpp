#include<iostream>
using namespace std;
int main()
{
    int nums[]={-1,-4,0,3,10};
    int n=sizeof(nums)/sizeof(nums[0]);
    int result[]={0,0,0,0,0};
    for(int i=0;i<=n-1;i++)
    {
        result[i]=nums[i]*nums[i];
        cout<<result[i]<<" ";
    }
    return 0;
    
}