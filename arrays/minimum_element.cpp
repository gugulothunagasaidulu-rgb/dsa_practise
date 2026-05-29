// Time Complexity: O(n)
// Space Complexity: O(1)

// Explanation:
// - We traverse the array once (n elements) → O(n)
// - For each element, only constant time operations are performed
//   (modulus, division, addition, comparison) → O(1)
// - No extra data structures are used, only a few variables → O(1) space
#include<iostream>
using namespace std;
int main()
{
    int arr[]={12,34,55};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum;
    int last_digit;
    int remove_last_digit;
    int minimumelement=999999;
    for(int i=0;i<n;i++)
    {
        last_digit=arr[i]%10;
        remove_last_digit=arr[i]/10;
        sum=last_digit+remove_last_digit;
    if(sum<minimumelement)
    {
        minimumelement=sum;
    }
    }
        cout<<minimumelement<<" ";

return 0;
}