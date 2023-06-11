/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    //235. Lowest Common Ancestor of a Binary Search Tree

    //For a given BST, returns the lowest common ancestor of two given nodes
    
    //nodes for holding the max (right) and min (left) values
    TreeNode* max;
    TreeNode* min;

    //Function for finding LCA of nodes
    //Recursively checks right and left subtrees for the lowest common ancestor
    TreeNode* findLCA(TreeNode*root) {
        //If root val is less than max and greater than min, root is LCA
        if (root->val <= max->val && root->val >= min->val) return root;
        //Else, if root val is less than val, LCA is greater than root, so recursively check right subtree
        if (root->val < min->val) return findLCA(root->right);
        //Else, LCA is less than root, so recursively check left subtree
        else return findLCA(root->left);
    }

    //Function for setting min and max nodes and starting recursive search for LCA
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        //Edge case: if root is null, return root
        if (root == NULL) return root;
        //Setting min to lesser given node and max to greater given node
        if (p->val < q->val) {
            min = p;
            max = q;
        }
        else {
            min = q;
            max = p;
        }
        //Returning result of search for LCA
        return findLCA(root);
    }
};