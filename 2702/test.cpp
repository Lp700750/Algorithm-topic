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
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        std::vector<std::vector<int>> vv;
        if(!root)
        {
            return {};
        }
        std::queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            std::vector<int> tempV;
            int count=q.size();
            for(int i=0;i<count;i++)
            {
                TreeNode* root=q.front();
                tempV.push_back(root->val);
                q.pop();
                if(root->left)
                {
                    q.push(root->left);
                }
                if(root->right )
                {
                    q.push(root->right);
                }
            }
            vv.push_back(tempV);
        }
        return vv;
    }
};
