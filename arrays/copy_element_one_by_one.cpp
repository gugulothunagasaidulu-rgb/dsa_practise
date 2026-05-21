/*
    Problem: Copy one array into another array

    Time Complexity: O(n)
    Space Complexity: O(n)

    Explanation:
    - We iterate through the array once (n elements)
    - We use an extra array of size n to store copied values
*/

#include<iostream>
using namespace std;
int main()
{
    int arr1[]={10,20,30,40,50};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]={0,0,0,0,0};
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    if(n1==n2)
    {
    for(int i=0;i<n1;i++)
    {
        
        arr2[i]=arr1[i];
        cout<<arr2[i]<<" ";
    }
    }

    return 0;
}