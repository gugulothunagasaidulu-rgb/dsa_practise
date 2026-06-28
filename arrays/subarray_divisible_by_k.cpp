#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    int nums[] = {4,5,0,-2,-3,1};
    int n=sizeof(nums)/sizeof(nums[0]);
    int k=5;
    map<int,int>mp;
    mp[0]=1;
    int res=0;
    int modsum=0;
    for(int i=0;i<n;i++)
    {
        modsum=(modsum+nums[i])%k;
        if(modsum<0)
        {
            modsum+=k;
        }
        res=res+mp[modsum];
        mp[modsum]+=1;
    }
    cout<< res<<" ";
    return 0;

}
