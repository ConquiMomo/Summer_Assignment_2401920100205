/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == NULL)
            return false;

        stack<TreeNode*> path;
        stack<int> sumpath;

        path.push(root);
        sumpath.push(root->val);

        while (!path.empty()) {
            TreeNode* temp = path.top();
            path.pop();
            int tempval = sumpath.top();
            sumpath.pop();

            if (temp->left == NULL && temp->right == NULL &&
                tempval == targetSum)
                return true;

            if (temp->right != NULL) {
                path.push(temp->right);
                sumpath.push(temp->right->val + tempval);
            }

            if (temp->left != NULL) {
                path.push(temp->left);
                sumpath.push(temp->left->val + tempval);
            }
        }
        return false;
    }
};