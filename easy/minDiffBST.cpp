/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    //530. Minimum Absolute Difference in BST

    //Given the root of a BST, returns the minimum absolute difference between any two values in the tree
    //Uses a recursive in-order search of the tree and member variables
    //Initializing member variables to maximum int
    int diff = INT_MAX;
    int val = INT_MAX;
    int getMinimumDifference(TreeNode* root) {
        //Recursively checking left subtree
        if (root->left != NULL)
            getMinimumDifference(root->left);
        //Setting diff if a lower difference is found and updating val
        diff = min(diff, abs(root->val - val));
        val = root->val;
        //Recursively checking right subtree
        if(root->right != NULL)
            getMinimumDifference(root->right);
        return diff;
    }
};
