/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:

    vector<Node*> trees;
    Node* first; 
    int level = 1; 
    Node* connect(Node* root) {
        if(!root) return NULL;
        if(!first) first = root;
        
        if(root->left && root->right)
        {
            trees.push_back(root->left);
            trees.push_back(root->right);
        }
        //cout << level << " " << root->val << " " << pow(2, level) << endl;

        if(trees.size() == pow(2, level))
        {
            int n = trees.size();
            for(int i = 0 ; i<n-1; i++)
                trees[i]->next = trees[i+1];
            level++;
        }

        if(trees.size()>0)
        {
            Node* temp = trees[0];
            trees.erase(trees.begin());
            return connect(temp);
        }
        else return first;
    }
};