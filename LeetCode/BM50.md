# 两数之和
```C++
class Solution 
{
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        std::vector<int> res;
        std::unordered_map<int , int> hashMap;
        for(int i = 0 ;i < numbers.size() ; i++)
        {
            if(hashMap.find(target - numbers[i]) != hashMap.end())
            {
                //此处说明找到了
                //第一个数
                res.push_back(hashMap[target - numbers[i]] + 1);
                //第二个数
                res.push_back(i + 1);
            }
            else 
            {
                hashMap[numbers[i]] = i;
            }
        }
        return res;
    }
};
```
