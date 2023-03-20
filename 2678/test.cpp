class CQueue 
{
private:
    std::stack<int> stack1;
    std::stack<int> stack2;
public:
    CQueue() 
    {}
    
    void appendTail(int value)
    {
        stack1.push(value);
    }
    
    int deleteHead() 
    {
        if(stack1.empty()&&stack2.empty())
        {
            return -1;
        }
        if(stack2.empty())
        {
            while(!stack1.empty())
            {
                int head=stack1.top();
                stack2.push(head);
                stack1.pop();
            }
        }
        int value=stack2.top();
        stack2.pop();
        return value;
    }
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */usr
