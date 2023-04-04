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
void _inorderTraversal(struct TreeNode* root, int* pHead, int* returnSize)
{
	if (root == NULL)
	{
		return ;
	}
	_inorderTraversal(root->left, pHead, returnSize);
	pHead[(*returnSize)++] = root->val;
	_inorderTraversal(root->right, pHead, returnSize);
}
int* inorderTraversal(struct TreeNode* root, int* returnSize)
{
    int*(pHead) = (int*)malloc(100 * sizeof(struct TreeNode));
	*returnSize = 0;
	//中序遍历
	_inorderTraversal(root, pHead, returnSize);
	return pHead;
}
