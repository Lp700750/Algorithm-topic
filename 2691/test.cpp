class MinStack 
{
private:
    std::vector<int> minstack;
public:
    // MinStack(std::vector<int>& mewstack)
    // {
    //     int* newspace=
    // }
    MinStack()
    {}
    void push(int x)
    {
        minstack.push_back(x);
    }
    void pop()
    {
        minstack.pop_back();
    }
    int top()
    {
        return minstack.back();
    }
    int min()
    {
        std::vector<int> temp=minstack;
        std::sort(temp.begin(),temp.end(),greater<int>());
        return temp.back();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->min();
 */<Paste>
