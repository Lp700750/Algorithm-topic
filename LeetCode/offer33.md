# 二叉搜索树的后序遍历
```C++
class Solution 
{
private:
    bool dfs(vector<int>& postorder, int left, int right)
    {
        if(right - left <= 1) return true;
        int root = postorder[right];
        int mid = left;
        for(; mid < right; mid++)
        {
            if(postorder[mid] > root) break;
        }
        for(int j = mid; j < right; j++)
        {
            if(postorder[j] < root) return false;
        }
        bool leftb = dfs(postorder, left, mid - 1);
        bool rightb = dfs(postorder, mid, right - 1);
        return leftb && rightb;
    }
public:
    bool verifyPostorder(vector<int>& postorder) 
    {
        int len = postorder.size() - 1;
        return dfs(postorder, 0, len);
    }
};
```
