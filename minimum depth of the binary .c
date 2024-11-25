#include <limits.h>

// Helper function to find the minimum depth
int minDepthHelper(struct TreeNode* root) {
    if (root == NULL) return 0;
    if (root->left == NULL && root->right == NULL) return 1;
    
    int leftDepth = root->left ? minDepthHelper(root->left) : INT_MAX;
    int rightDepth = root->right ? minDepthHelper(root->right) : INT_MAX;
    
    return 1 + (leftDepth < rightDepth ? leftDepth : rightDepth);
}

int minDepth(struct TreeNode* root) {
    return minDepthHelper(root);
}
