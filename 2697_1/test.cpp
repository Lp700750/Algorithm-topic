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
    ListNode* getKthFromEnd(ListNode* head, int k) 
    {
        ListNode* backPoint=head;
        ListNode* frontPoint=head;
        for(int i=0;i<k;i++)
        {
            frontPoint=frontPoint->next;
        }
        while(frontPoint)
        {
            frontPoint=frontPoint->next;
            backPoint=backPoint->next;
        }
        return backPoint;
    }
};
