definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
    {
        ListNode* pHead=new ListNode(0);
        ListNode* phead=pHead;
        ListNode* temp=nullptr;
        while(l1&&l2)
        {
            if(l1->val<=l2->val)
            {
                temp=l1;
                l1=l1->next;
                pHead->next=temp;
                pHead=pHead->next;
            }
            else
            {
                temp=l2;
                l2=l2->next;
                pHead->next=temp;
                pHead=pHead->next;
            }
        }
        if(l1==nullptr)
        {
            pHead->next=l2;
        }
        if(l2==nullptr)
        {
            pHead->next=l1;
        }
        return phead->next;
    }
};
