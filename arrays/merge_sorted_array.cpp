Title: Merge Two Sorted Arrays (Two Pointer Approach)

Time Complexity: O(n1 + n2)
Space Complexity: O(n1 + n2)
#include<iostream>
using namespace std;
int main()
{
    int A[]={1,2,3};
    int B[]={4,5,6};
    int n1=3;
    int n2=3;
    int result[n1+n2];
    int i=0;
    int j=0;
    int k=0;
    while(i<n1 && j<n2)
    {
        if(A[i]<B[j])
        {
            result[k]=A[i];
            i++;
        }
        else
        {
            result[k]=B[j];
        }
        k++;
    }
    while(i<n1)
    {
        result[k]=A[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        result[k]=B[j];
        j++;
        k++;
    }
    for(int x=0;x<k;x++)
    {
        cout<<result[x]<<" ";
    }
    return 0;
}