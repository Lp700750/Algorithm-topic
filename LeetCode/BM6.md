# 判断链表是否有环
### 解题思路
我们都知道链表不像二叉树，每个节点只有一个val值和一个next指针，也就是说一个节点只能有一个指针指向下一个节点，不能有两个
指针，那这时我们就可以说一个性质：环形链表的环一定在末尾，末尾没有NULL了。
有任何一个节点可以指针指出环，它们只能在环内不断循环，因此环后面不可能还有一条尾巴。如果是普通线形链表末尾一定有NULL，那
我们可以根据链表中是否有NULL判断是不是有环。但是，环形链表遍历过程中会不断循环，线形链表遍历到NULL结束了，但是环形链表何时
能结束呢？我们可以用双指针技巧，同向访问的双指针，速度是快慢的，只要有环，二者就会在环内不断循环，且因为有速度差异，二者一定会相遇。
### 题解
```C++
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution 
{
public:
    bool hasCycle(ListNode *head) 
    {
        ListNode* quickPtr=head;
        ListNode* slowPtr=head;

        while(quickPtr&&quickPtr->next!=nullptr)
        {
            quickPtr=quickPtr->next->next;
            slowPtr=slowPtr->next;
            if(quickPtr==slowPtr) return true;
        }
        return false;
        
    }
};
```
