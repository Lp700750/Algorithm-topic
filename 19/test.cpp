definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution 
{
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        //1.设置快指针比慢指针多走n步
        ListNode* quickPointer=head;
        ListNode* slowPointer=head;

        //2.快慢指针同时走，当快指针走到终点，慢指针走到目标点上一个节点
        for(int i=0;i<n;i++)
        {
            quickPointer=quickPointer->next;
        }
        if(quickPointer==nullptr)
        {
            return slowPointer->next;
        }
        while(quickPointer)
        {
            if(!quickPointer||!(quickPointer->next))
            {
                break;
            }
            quickPointer=quickPointer->next;
            slowPointer=slowPointer->next;
        }

        //3.删除目标节点
        ListNode* goalNode=slowPointer->next;
        slowPointer->next=goalNode->next;
        return head;
    }
};
