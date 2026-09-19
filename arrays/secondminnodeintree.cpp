#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Define TreeNode
struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x)
    {
        val = x;
        left = nullptr;
        right = nullptr;
    }
};

class Solution
{
public:

    void preorder(TreeNode* root, vector<int>& ans)
    {
        if(root == nullptr)
            return;

        ans.push_back(root->val);

        preorder(root->left, ans);
        preorder(root->right, ans);
    }

    int findSecondMinimumValue(TreeNode* root)
    {
        vector<int> ans;

        preorder(root, ans);

        int minval = root->val;
        int second = INT_MAX;

        for(int x : ans)
        {
            if(x > minval)
            {
                second = min(second, x);
            }
        }

        if(second == INT_MAX)
            return -1;

        return second;
    }
};

int main()
{
    /*
              2
             / \
            2   5
               / \
              5   7
    */

    TreeNode* root = new TreeNode(2);

    root->left = new TreeNode(2);
    root->right = new TreeNode(5);

    root->right->left = new TreeNode(5);
    root->right->right = new TreeNode(7);

    Solution obj;

    int result = obj.findSecondMinimumValue(root);

    cout << "Second minimum value = " << result << endl;

    return 0;
}