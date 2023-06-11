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
    //226. Invert Binary Tree

    //Given the root of a binary tree, returns root of inverted tree (all left and right subtrees are swapped)
    //Recursively inverts each subtree
    TreeNode* invertTree(TreeNode* root) {
        //Edge case: if root is null, return null
        if (!root) return NULL;
        //Temp node for swapping left and right nodes
        TreeNode* temp;
        //Recursively invert left and right subtrees
        root->left = invertTree(root->left);
        root->right = invertTree(root->right);
        //Swap left and right nodes and return root
        temp = root->left;
        root->left = root->right;
        root->right = temp;
        return root;
        
        
    }
};