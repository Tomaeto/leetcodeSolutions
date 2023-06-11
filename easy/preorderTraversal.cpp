/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    //589. N-ary Tree Preorder Traversal

    //For a given root of an n-ary tree, return preorder traversal of its nodes' values

    vector<int> values;
    //Function for recursively traversing tree
    void traversal(Node* node) {
        //Edge case: if node is null, return
        if (node == NULL) return;
        //Push node's value into array and traverse all child nodes
        values.push_back(node->val);
        for (Node* child : node->children) {
            traversal(child);
        }
    }
    //Function for calling traversal and returning values
    vector<int> preorder(Node* root) {
        //Clear array to ensure values are correct
        values.clear();
        //Call traversal from root of tree
        traversal(root);
        //return array of values
        return values;
    }
    
};