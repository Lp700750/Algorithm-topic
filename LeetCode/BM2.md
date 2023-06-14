## 链表内指定区间反转
```C++
class Solution 
{
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) 
    {
        //设置头部节点
        auto phead=new ListNode(0);
        phead->next=head;

        //设置前向节点
        ListNode* prev=phead;

        //设置当前节点
        ListNode* cur=nullptr;
        ListNode* ret=nullptr;
        
        //找到第一个反向节点
        for(int i=1;i<m;i++)
        {
            head=head->next;
            prev=prev->next;
        }

        //将规定区域进行翻转
        ListNode* temp=head;
        for(int j=m;j<=n;j++)
        {
            cur=head->next;
            head->next=ret;
            ret=head;
            head=cur;
        }
        temp->next=cur;
        prev->next=ret;

        return phead->next;
    }
};
```
