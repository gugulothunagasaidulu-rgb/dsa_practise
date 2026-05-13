//Union of Two Arrays
// Topic: Arrays
// Language: C++
// Time Complexity: O(n1 * n2)
#include<iostream>
using namespace std;
int main()
{
    //first array
    int A[]={1,2,3,4,5};
    //Second array
    int B[]={3,4,5,6,7};
    //size of both arrays
    int n1=sizeof(A)/sizeof(A[0]);
    int n2=sizeof(B)/sizeof(B[0]);
    for(int i=0;i<n1;i++)
    {
        if(i>0 && A[i]!=A[i-1])
            {
            cout<<A[i]<<" ";
            break;
    
            }
            cout<<A[i]<<" ";
    }
    for(int j=0;j<n2;j++)
        {
            if(j>0 & B[j]==B[j-1])
                {
                cout<<B[j]<<" ";
                break;

                }
                cout<<B[j]<<" ";

    }
    return 0;
}