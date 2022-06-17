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
    int count = 0;
    int search(TreeNode* root) {
       if(!root)return 1;
        int  a = search(root->left);
        int  b = search(root->right);
        
        if(a==0 or b==0){
            count++;
            return 2;}
        if(a==1 and b == 1)return 0;
        return 1;
    }
    int minCameraCover(TreeNode* root){
        int x = search(root);
        if(x==0)return count+1;
        return count;
    }
};