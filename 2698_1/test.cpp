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
    bool mirrorTree(TreeNode* lRoot,TreeNode* rRoot)
    {
        //让递归停下来的条件
        if(lRoot==nullptr&&rRoot==nullptr)
        {
            return true;
        }
        if(lRoot==nullptr||rRoot==nullptr)
        {
            return false;
        }
        if(lRoot->val!=rRoot->val)
        {
            return false;
        }
        return mirrorTree(lRoot->left,rRoot->right)&&mirrorTree(lRoot->right,rRoot->left);
    }
    bool isSymmetric(TreeNode* root) 
    {
        if(root)
        {
            return mirrorTree(root->left,root->right);
        }
        return true;
    }
};
