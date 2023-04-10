definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution 
{
private:
    //std::unordered_map<std::vector<int>,int> desMap;
    std::vector<vector<int>> desVect;
    std::vector<int> Vect;
    void Tree(TreeNode* root,int ret)
    {
        if(!root)
        {
            return ;
        }
        Vect.push_back(root->val);
        ret=ret-(root->val);
        if(root->left==nullptr&&root->right==nullptr&&ret==0)
        {
            desVect.push_back(Vect);
        }
        Tree(root->left,ret);
        Tree(root->right,ret);
        Vect.pop_back();
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int target) 
    {
        Tree(root,target);
        return desVect;
    }
};
