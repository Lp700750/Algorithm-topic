## 合并K个已排序的链表
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
private:
    ListNode* merge(ListNode* phead1,ListNode* phead2)
    {
        //特殊的情况
        if(phead1==nullptr) return phead2;
        if(phead2==nullptr) return phead1;

        //设定头节点
        auto Head=new ListNode(0);
        auto head=Head;

        while(phead1&&phead2)
        {
            if(phead1->val<=phead2->val)
            {
                head->next=phead1;
                phead1=phead1->next;
            }
            else 
            {
                head->next=phead2;
                phead2=phead2->next;
            }
            head=head->next;
        }

        if(phead1) head->next=phead1;
        else if(phead2) head->next=phead2;

        return Head->next;
    }
    ListNode* div(vector<ListNode*>& lists,int left,int right)
    {
        if(left>right) return nullptr;
        else if(left==right) return lists[left];
        int mid=left+(right-left)/2;
        //int mid=(right+left)/2;
        return merge(div(lists,left,mid),div(lists,mid+1,right));
    }
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
        return div(lists,0,lists.size()-1);
    }
};
```
