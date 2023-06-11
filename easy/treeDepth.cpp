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
    //104. Maximum Depth of Binary Tree

    //Returns maximum depth of given binary tree
    //Recursively finds depth of each subtree and returns greatest depth
    int maxDepth(TreeNode* root) {
        //Edge case: if root is null, return 0
        if (root == NULL)
            return 0;
        
        //Initialize depth to minimum integer
        int depth = INT_MIN;
        int lDepth;
        int rDepth;
        //Recursively call maxDepth for left and right subtrees while incrementing each call
        lDepth = maxDepth(root -> left) + 1;
        rDepth = maxDepth(root -> right) + 1;

        //Return greatest depth
        if (lDepth < rDepth)
            return rDepth;
        else
            return lDepth;
    }
};