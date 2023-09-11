# 滑动窗口的最大值
```C++
class Solution 
{
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) 
    {
        vector<int> res;
        deque<int> slideWindow;

        // 将前n个数值填入双端队列当中
        for(int i = 0; i < k; i++)
        {
            while(!slideWindow.empty() && nums[i] >= nums[slideWindow.back()])
            {
                slideWindow.pop_back();
            }
            slideWindow.push_back(i);
        }
        res.push_back(nums[slideWindow.front()]);
        // 依次将剩余的数值放入到队列当中
        for(int i = k; i < (int)nums.size(); i++)
        {
            while(!slideWindow.empty() && nums[i] >= nums[slideWindow.back()])
            {
                slideWindow.pop_back();
            }
            slideWindow.push_back(i);
            while(slideWindow.front() <= i - k) slideWindow.pop_front();
            res.push_back(nums[slideWindow.front()]);
        }
        return res;
    }
};
```
