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
    vector<int> queueL;
    vector<int> queueR;
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr) return true;
        if(root->left) 
        {
            queueL.push_back(root->left->val);
            AddLeft(root->left);
        }
        if(root->right) 
        {
            queueR.push_back(root->right->val);
            AddRight(root->right);
        }
        
        int n = queueL.size();
        if(n!=queueR.size()) return false;

        for(int i = 0; i<n; i++)
        {
            if(queueL[i]!=queueR[i])
                return false;
        }
        return true;
    }
    
    void AddLeft(TreeNode* root)
    {
        if(root->right) queueL.push_back(root->right->val);
        else queueL.push_back(0);
        
        if(root->left) queueL.push_back(root->left->val);
        else queueL.push_back(0);

        if(root->right) AddLeft(root->right);
        if(root->left) AddLeft(root->left);
    }
    
    void AddRight(TreeNode* root)
    {
        
        if(root->left) queueR.push_back(root->left->val);
        else queueR.push_back(0);
        
        if(root->right) queueR.push_back(root->right->val);
        else queueR.push_back(0);

        if(root->left) AddRight(root->left);
        if(root->right)AddRight(root->right);
    }
    
    
};