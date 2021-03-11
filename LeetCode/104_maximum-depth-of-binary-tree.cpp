// Leetcode already defines the TreeNode struct hence comment it before submission.
// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
  public:
    static int maxDepth(TreeNode const *root) {
        if (root == NULL) {
            return 0;
        } else
            return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
};