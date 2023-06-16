## 合并两个有序的链表
#### 解题思路
> - step 1：判断空链表的情况，只要有一个链表为空，那答案必定就是另一个链表了，就算另一个链表也为空。
> - step 2：新建一个空的表头后面连接两个链表排序后的节点，两个指针分别指向两链表头。
> - step 3：遍历两个链表都不为空的情况，取较小值添加在新的链表后面，每次只把被添加的链表的指针后移。
> - step 4：遍历到最后肯定有一个链表还有剩余的节点，它们的值将大于前面所有的，直接连在新的链表后面即可。
#### 题解
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
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2) 
    {
        //特殊情况
        if(pHead1==nullptr) return pHead2;
        if(pHead2==nullptr) return pHead1;

        //创建一个表头作为最终结果的表头
        auto Head=new ListNode(0);
        auto head=Head;

        //遍历两个链表
        while(pHead1&&pHead2)
        {
            if((pHead1->val)<=(pHead2->val))
            {
                head->next=pHead1;
                head=head->next;
                pHead1=pHead1->next;
            }
            else 
            {
                head->next=pHead2;
                head=head->next;
                pHead2=pHead2->next;
            }
        }
        if(pHead1) head->next=pHead1;
        if(pHead2) head->next=pHead2;

        return Head->next;
    }
};
```
