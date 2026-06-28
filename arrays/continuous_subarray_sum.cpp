#include<iostream>
#include <map>
#include <algorithm>
using namespace std;int main()
{
    map<int,int>mp;
    int nums[]={0,1,0};
    int n=sizeof(nums)/sizeof(nums[0]);
     mp[0]=-1;
    int sum=0;
    int maxi=0;
    int res=0;
    for(int i=0;i<n;i++)
    {
        if(nums[i]==0)
        {
            sum+=-1;
        }
        else
        {
            sum+=1;
        }
        if(mp.find(sum)!=mp.end())
        {
            res=max(res,i-mp[sum]);
        }
        else
        {
            mp[sum]=i;
        }
    }
    cout<<res<<" ";
}