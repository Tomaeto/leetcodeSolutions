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
    //110. Balanced Binary Tree

    //Returns boolean representing if the given binary tree is balanced (left and right subtrees have a height difference of up to 1)
    bool isBalanced(TreeNode* root) {
        
        //Intialize balance of tree as true
        bool balance = true;

        if (balance == true && root != NULL)
        {
            //If difference in height is 0 or 1, recursively check balance of left and right subtrees
            //If any subtree within the tree is unbalanced, balance becomes false
            if (abs(height(root -> left) - height(root-> right)) <= 1)
            {
                balance = isBalanced(root -> left);
                if (balance == true)
                    balance = isBalanced(root -> right);
            }
            else
                balance = false;
        }
        
        return balance;
    }
    
    //Function for determining height of a node in binary tree
    //Recursively checks height of right and left subtrees and returns greater height
    int height(TreeNode* t) {
        int lHeight;
        int rHeight;
        
        if (t != NULL)
        {
            lHeight = height(t -> left) + 1;
            rHeight = height(t -> right) + 1;
            
            if (lHeight > rHeight)
                return lHeight;
            else
                return rHeight;
        }
        else
            return -1;
    }
};