#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int left=1;
    int right=n;
    int ans;
    bool isbadversion(int version);
    while(left<=right)
    {
        int mid=left+(right-left)/2;
        if(isbadversion(mid))
        {
            ans=mid;
            right=mid-1;

        }
        else
        {
            left=mid+1;
        }
    }
    cout<<ans<<" ";
}