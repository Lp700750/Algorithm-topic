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
        if(!root)
        {
            return {};
        }
        std::queue<TreeNode*> q;
        std::vector<std::vector<int>> vv;
        q.push(root);
        int flag=0;
        while(!q.empty())
        {
            std::vector<int> tempV;
            int ret=q.size();
            for(int i=0;i<ret;i++)
            {
                TreeNode* root=q.front();
                tempV.push_back(root->val);
                q.pop();
                if(root->left)
                {
                    q.push(root->left);
                }
                if(root->right)
                {
                    q.push(root->right);
                }
            }
            if(flag%2==1)
            {
                std::reverse(tempV.begin(),tempV.end());
            }
            vv.push_back(tempV);
            flag++;
        }
        return vv;
    }
};
