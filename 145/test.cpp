definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void _postorderTraversal(struct TreeNode* root, int* pHead, int* returnSize)
{
	if (root == NULL)
	{
		return ;
	}
	_postorderTraversal(root->left, pHead, returnSize);
	_postorderTraversal(root->right, pHead, returnSize);
    pHead[(*returnSize)++] = root->val;
}
int* postorderTraversal(struct TreeNode* root, int* returnSize)
{
    int*(pHead) = (int*)malloc(100 * sizeof(struct TreeNode));
	*returnSize = 0;
	//后序遍历
	_postorderTraversal(root, pHead, returnSize);
	return pHead;
}
