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
    vector<int> preorder(Node* root) {
            vector<int> v;
            helper(root, v);
            return v;
    }
        void helper(Node* node, vector<int> &v){
                if(node == NULL){
                        return;
                }
                v.emplace_back(node->val);
                for(int i=0;i<node->children.size();i++){
                        helper(node->children[i],v);
                }
        }
};