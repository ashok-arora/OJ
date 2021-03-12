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
    int minDepth(TreeNode *root) {
        if (root == NULL) {
            return 0;
        }
        if (root->right == NULL || root->left == NULL)
            return 1 + max(minDepth(root->left), minDepth(root->right));
        else 
            return 1 + min(minDepth(root->left), minDepth(root->right));
    }
    
    int minDepth2(TreeNode* root) {
        if(!root) return 0;
        
        else if(!root->left) return 1+ minDepth(root->right);
        else if(!root->right) return 1 + minDepth(root->left);
        else
        {
            int ans = 1 + min(minDepth(root->left),minDepth(root->right));
            root->left = NULL;
            root->right = NULL;
            return ans;
        }
    }
};