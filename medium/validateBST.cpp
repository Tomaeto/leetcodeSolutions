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
    //98. Validate Binary Search Tree

    //Returns boolean representing if given tree is a valid Binary Search Tree
    //Recursively checks each node in the tree if value is within bounds (left subtree is less than root, right subtree is greater than root)
    bool isBST(TreeNode* root, long min, long max) {
        //Edge case: if root is null, return true
        if (!root) return true;
        //If node's value is not withing bounds, return false
        if (root->val<=min || root->val>=max) return false;
        //Recursive call for left and right subtrees
        //For left subtree, set max to root's value
        //For right subtree, set min to root's value
        return (isBST(root->left,min, root->val) && isBST(root->right,root->val, max));
    }

    //Public function that calls recursive function, with min & max initialized to min and max possible values
    bool isValidBST(TreeNode* root) {
        //Edge case: if root has no subtrees, return true
        if (!root->left && !root->right) return true;
        return isBST(root,LONG_MIN,LONG_MAX);
    }
};