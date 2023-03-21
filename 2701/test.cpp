definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution 
{
public:
    vector<int> levelOrder(TreeNode* root) 
    {
        if(!root)
        {
            return {};
        }
        std::queue<TreeNode*> q;
        std::vector<int> v;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* root=q.front();
            q.pop();
            v.push_back(root->val);
            if(root->left)
            {
                q.push(root->left);
            }
            if(root->right)
            {
                q.push(root->right);
            }
        }
        return v;
    }
};
