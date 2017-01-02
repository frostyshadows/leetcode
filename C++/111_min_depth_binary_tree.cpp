/*
Given a binary tree, find its minimum depth.

The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root == NULL) {
            return 0;
        } else {
            int left = 1 + minDepth(root->left);
            int right = 1 + minDepth(root->right);
            if (root->left == NULL && root->right != NULL){
                return right;
            }
            if (root->right == NULL && root->left != NULL){
                return left;
            }
            int min;
            if (left < right){
                min = left;
            } else {
                min = right;
            }
            return min;
        }
    }
};