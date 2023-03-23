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
    void reverseTree(TreeNode* root)
    {
        if(root==nullptr)
        {
            return;
        }
        TreeNode* tempNode=root->left;
        root->left=root->right;
        root->right=tempNode;
        reverseTree(root->left);   
        reverseTree(root->right);
    }
    TreeNode* mirrorTree(TreeNode* root) 
    {
        if(root==nullptr)
        {
            return root;
        }
        reverseTree(root);
        return root;   
    }
};
