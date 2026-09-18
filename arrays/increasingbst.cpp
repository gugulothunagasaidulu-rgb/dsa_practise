// Time Complexity: O(n)
// Space Complexity: O(n)
#include<iostream>

#include<vector>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class solution
{
public:

    void inorder(TreeNode* root, vector<int>& ans)
    {
        if(root == nullptr)
            return;

        inorder(root->left, ans);

        ans.push_back(root->val);

        inorder(root->right, ans);
    }

    TreeNode* increasingBST(TreeNode* root)
    {
        vector<int> ans;

        inorder(root, ans);

        TreeNode* dummy = new TreeNode(0);
        TreeNode* curr = dummy;

        for(int x : ans)
        {
            curr->right = new TreeNode(x);
            curr = curr->right;
        }

        return dummy->right;
    }
};

int main()
{
    // Create the tree
    //
    //        5
    //       / \
    //      3   6
    //     / \
    //    2   4

    TreeNode* root = new TreeNode(5);

    root->left = new TreeNode(3);
    root->right = new TreeNode(6);

    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);

    // Create solution object
    solution obj;

    // Call increasingBST
    TreeNode* result = obj.increasingBST(root);

    // Print the result
    cout << "Increasing BST: ";

    while(result != nullptr)
    {
        cout << result->val << " ";
        result = result->right;
    }

    cout << endl;

    return 0;
}