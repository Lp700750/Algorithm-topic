Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution 
{
public:
    vector<int> reversePrint(ListNode* head) 
    {
        std::vector<int> desStr;
        while(head)
        {
            desStr.push_back(head->val);
            head=head->next;
        }
        std::reverse(desStr.begin(),desStr.end());
        return desStr;
    }
};
