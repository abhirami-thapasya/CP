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
    int maxPathDown(TreeNode* root, int& maxsum){
        if(root==NULL){
            return 0;
        }
        int l=max(0,maxPathDown(root->left,maxsum));
        int r=max(0,maxPathDown(root->right,maxsum));
        maxsum=max(maxsum,root->val+l+r);
        return root->val+max(l,r);
    }
public:
    int maxPathSum(TreeNode* root) {
        int maxsum=root->val;
        maxPathDown(root,maxsum);
        return maxsum;
    }
};