class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node() {}

    Node(int _val) {
        val = _val;
        left = NULL;
        right = NULL;
    }

    Node(int _val, Node* _left, Node* _right) {
        val = _val;
        left = _left;
        right = _right;
    }
};
*/
class Solution 
{
private:
    Node* head;
    Node* pre;
    void Tree(Node* cur)
    {
        if(cur==nullptr)
        {
            return;
        }
        Tree(cur->left);
        if(pre != nullptr) 
        {
            pre->right = cur;
        }
        else 
        {
            head = cur;
        }
        cur->left = pre;
        pre = cur;
        Tree(cur->right);
    }
public:
    Node* treeToDoublyList(Node* root) 
    {
        if(!root)
        {
            return nullptr;
        }
        Tree(root);
        head->left = pre;
        pre->right = head;
        return head;
    }
};
