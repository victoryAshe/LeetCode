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
    queue<TreeNode*> nodes;
    int maxDepth(TreeNode* root) {
        if(!root) return 0;

        int depth = 0;
        nodes.push(root);
        
        TreeNode* temp;
        int size = 0;
        while(!nodes.empty())
        {
            size = nodes.size();
            for(int i = 0; i<size; i++)
            {
                temp = nodes.front();
                nodes.pop();
                if(temp->left) nodes.push(temp->left);
                if(temp->right) nodes.push(temp->right);
            }
            depth++;
        }

        return depth;
    }
};