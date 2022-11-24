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
    vector<int> nums;
    int findSecondMinimumValue(TreeNode* root) {
        DFS(root);
        sort(nums.begin(), nums.end());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        return nums.size()>1 ? nums[1] : -1;
    }
    
    void DFS(TreeNode* root)
    {
        nums.push_back(root->val);
        if(root->left) DFS(root->left);
        if(root->right) DFS(root->right);
    }
};