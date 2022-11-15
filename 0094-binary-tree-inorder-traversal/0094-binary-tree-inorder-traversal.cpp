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
    vector<int> answer;
    
    vector<int> inorderTraversal(TreeNode* root) 
    {
        if(root==nullptr) return answer;

        //left
        if(root->left!=nullptr) 
        {
            if(root->left->left!=nullptr || root->left->right!=nullptr)
            {
                inorderTraversal(root->left);
            }
            else answer.push_back(root->left->val);
        }

        //root
        answer.push_back(root->val);

        //right
        if(root->right!=nullptr) 
        {
            if(root->right->left!=nullptr || root->right->right!=nullptr)
            {
                inorderTraversal(root->right);
            }
            else answer.push_back(root->right->val);
        }

        return answer;
    }
};