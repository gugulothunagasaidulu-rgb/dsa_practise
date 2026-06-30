#include <iostream>
using namespace std;

int main()
{
    int nums[] = {2,7,11,15};
    int target = 9;

    int n = sizeof(nums) / sizeof(nums[0]);
    int left = 0;
    int right = n - 1;

    while(left <= right)
    {
        int temp = nums[left] + nums[right];

        if(temp == target)
        {
            cout << left + 1 << " " << right + 1;
            break;
        }
        else if(temp < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    return 0;
}