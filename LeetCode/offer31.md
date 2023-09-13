# 栈的压入弹出
```C++
class Solution 
{
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) 
    {
        std::stack<int> sta;
        int i = 0;
        for(auto e : pushed)
        {
            sta.push(e);
            while(!sta.empty() && sta.top() == popped[i])
            {
                sta.pop();
                i++;
            }
        }
        return sta.empty();
    }
};
```
