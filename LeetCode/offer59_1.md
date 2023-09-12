# 队列的最大值
```C++
class MaxQueue 
{
private:
    // 存放数值
    std::queue<int> que;
    // 存放一段区间内的最大值
    std::deque<int> deq;
public:
    MaxQueue() {}
    int max_value() 
    {
        if(deq.empty()) return -1;
        return deq.front();
    }
    void push_back(int value) 
    {
        que.push(value);
        // 修改容器内部的最大值
        while(!deq.empty() && deq.back() < value) deq.pop_back();
        deq.push_back(value);
    }
    
    int pop_front() 
    {
        if(que.empty()) return -1;
        int res = que.front();
        que.pop();
        // 如果最大值容器的首字母和存放数值的首字母一样
        // 那么该最大值就需要删除，否则说明该最大值还在数值容器后面，不需要删除
        if(res == deq.front()) deq.pop_front();
        return res;
    }
};
```
