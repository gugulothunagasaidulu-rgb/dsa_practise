#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int evencount=0;
    int oddcount=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            evencount++;
        }
        else
        {
            oddcount++;
        }
    }
    cout<<evencount<<" "<<oddcount<<" ";

    return 0;
}

