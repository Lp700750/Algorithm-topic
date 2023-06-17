# 判断链表当中环的入口节点
### 解题思路
![image](https://github.com/Lp700750/Algorithm-topic/assets/104414865/9b13245a-b921-4aa2-b62e-ff2a49174bef)
### 题解
```C++

/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/
class Solution  
{
public:
    ListNode* EntryNodeOfLoop(ListNode* pHead) 
    {
        std::unordered_map<ListNode*,int> hashMap;
        while(pHead)
        {
            hashMap[pHead]++;
            if(hashMap[pHead]==2) return pHead;
            pHead=pHead->next;
        }
        return nullptr;
    }
};

```
