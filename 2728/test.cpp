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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        ListNode* ap=headA;
        ListNode* ab=headB;
        while(ap!=ab)
        {
            ap=ap!=nullptr?ap->next:headB;
            ab=ab!=nullptr?ab->next:headA;
        }
        return ap;
    }
};
