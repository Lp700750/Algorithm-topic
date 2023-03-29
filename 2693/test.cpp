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
    ListNode* deleteNode(ListNode* head, int val) 
    {
        if(head->val==val)
        {
            return head->next;
        }
        ListNode* frontP=head->next;
        ListNode* backP=head;
        while(frontP)
        {
            if(frontP->val==val)
            {
                backP->next=frontP->next;
                return head;
            }
            frontP=frontP->next;
            backP=backP->next;
        }
        return nullptr;
    }
};
