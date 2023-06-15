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
    //1161. Maximum Level Sum of a Binary Tree

    //Given the root of a binary tree, returns the level x such that the sum of all nodes at x is maximal
    //Performs a breadth-first search to check sum at each level and store greatest sum
    int maxLevelSum(TreeNode* root) {
        vector<TreeNode*> q;
        q.push_back(root);
        int level = 0;
        int maxLevel = 0;
        int maxSum = INT_MIN;
        int curSum;
        while(!q.empty()) {
            curSum = 0;
            vector<TreeNode*> tempQ;
            level++;
            for (auto node : q) {
                curSum += node->val;
                if (node->left != NULL)
                    tempQ.push_back(node->left);
                if (node->right != NULL)
                    tempQ.push_back(node->right);
            }
            maxLevel = curSum > maxSum ? level : maxLevel;
            maxSum = max(curSum, maxSum);
            swap(q, tempQ);
        }
        return maxLevel;
    }
};
