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
    ListNode* reverseList(ListNode* head) 
    {
        std::vector<int> tempStr;
        ListNode* tempHead1=head;
        ListNode* tempHead2=head;
        while(tempHead1)
        {
            tempStr.push_back(tempHead1->val);
            tempHead1=tempHead1->next;
        }
        std::reverse(tempStr.begin(),tempStr.end());
        std::vector<int>::iterator ptr=tempStr.begin();
        while(tempHead2)
        {
            tempHead2->val=*ptr;
            ptr++;
            tempHead2=tempHead2->next;
        }
        return head;
    }
};
