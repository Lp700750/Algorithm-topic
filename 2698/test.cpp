class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/
class Solution 
{
public:
    Node* createNode()
    {
        Node* newNode=(Node*)malloc(sizeof(Node));
        newNode->val=0;
        newNode->next=nullptr;
        newNode->random=nullptr;
        return newNode;
    }
    Node* copyRandomList(Node* head) 
    {
        Node* Head=nullptr;
        Node* desHead=Head;
        Node* phead=head;
        std::unordered_map<Node*,Node*> mHead;
        while(head)
        {
            //构造一个节点
            Node* newNode=createNode();
            newNode->val=head->val;
            newNode->next=head->next;
            newNode->random=head->random;
            if(nullptr==Head)
            {
                Head=newNode;
                head=head->next;
                desHead=Head;
                mHead.insert(std::make_pair(head,Head));
                continue;
            }
            Head->next=newNode;
            Head=Head->next;
            mHead.insert(std::make_pair(head,Head));
            head=head->next;
        }
        while(phead)
        {
            Node* ranPtr=phead->random;
            if(ranPtr==nullptr)
            {
                mHead[phead]->random=nullptr;
            }
            else
            {
                mHead[phead]->random=mHead[ranPtr];
            }
            phead=phead->next;
        }
        return desHead;

    }
};
