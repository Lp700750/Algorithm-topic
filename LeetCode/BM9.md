# 删除链表的倒数第n个结点
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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        auto phead=new ListNode(0);
        phead->next=head;
        ListNode* tail=head;
        ListNode* prev=phead;
        for(int i=0;i<n;i++) tail=tail->next;
        ListNode* cur=head;
        while(tail)
        {
            tail=tail->next;
            cur=cur->next;
            prev=prev->next;
        }
        prev->next=cur->next;
        return phead->next;
    }
};
```
