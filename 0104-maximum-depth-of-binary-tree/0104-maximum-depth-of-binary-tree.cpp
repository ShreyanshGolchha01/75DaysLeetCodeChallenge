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
    // int c(TreeNode* p,int count)
    // {
    //     if(!p->left && !p->right) return count;
    //     else if(!p->left && p->right)
    //     {
    //          return c(p->right,count+1);
    //     }
    //     else
    //     {
    //         return c(p->left,count+1);
    //     }
    //     // return count;
    // }
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        return max(left,right)+1;
        
    }
};