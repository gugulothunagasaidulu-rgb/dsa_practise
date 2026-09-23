#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode* left, TreeNode* right)
        : val(x), left(left), right(right) {}
};

class Solution
{
public:
    void inorder(TreeNode* root, vector<int>& ans)
    {
        if (root == nullptr)
            return;

        inorder(root->left, ans);
        ans.push_back(root->val);
        inorder(root->right, ans);
    }

    vector<int> getAllElements(TreeNode* root1, TreeNode* root2)
    {
        vector<int> ans;

        inorder(root1, ans);
        inorder(root2, ans);

        sort(ans.begin(), ans.end());

        return ans;
    }
};

int main()
{
    // Tree 1:
    //       2
    //      / \
    //     1   4

    TreeNode* root1 = new TreeNode(2);
    root1->left = new TreeNode(1);
    root1->right = new TreeNode(4);

    // Tree 2:
    //       1
    //      / \
    //     0   3

    TreeNode* root2 = new TreeNode(1);
    root2->left = new TreeNode(0);
    root2->right = new TreeNode(3);

    Solution obj;

    vector<int> result = obj.getAllElements(root1, root2);

    cout << "All elements in sorted order: ";

    for (int x : result)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}