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
private:
    int sol(TreeNode* root,int& d){
        if(root==NULL){
            return 0;
        }
        int l=sol(root->left,d);
        int r=sol(root->right,d);
        d=max(d,l+r);
        return 1+max(l,r);
    }
public: 
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter=0;
        sol(root, diameter);
        return diameter;
    }
};