# 链表中倒数最后k个结点
```C++
/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 *	ListNode(int x) : val(x), next(nullptr) {}
 * };
 */
class Solution 
{
public:
    ListNode* FindKthToTail(ListNode* pHead, int k) 
    {
        if(k==0) return nullptr;
        ListNode* tail=pHead;
        for(int i=0;i<k;i++)
        {
            if(tail==nullptr) return nullptr;
            tail=tail->next;
        }
        ListNode* cur=pHead;
        while(tail)
        {
            tail=tail->next;
            cur=cur->next;
        }
        return cur;
    }
};
```
