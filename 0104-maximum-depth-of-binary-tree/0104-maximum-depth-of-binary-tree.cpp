class Solution {
public:
    
    int maxDepth(TreeNode* root) {
        if(!root) return 0;

        queue<TreeNode*> nodes;
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