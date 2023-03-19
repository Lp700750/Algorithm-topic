class Solution 
{
public:
    int search(vector<int>& nums, int target) 
    {
        int count=0;
        std::unordered_map<int,int> countMap;
        for(auto e:nums)
        {
            if(e==target)
            {
                count++;
            }
            countMap[e]++;
        }
        if(count)
        {
            return countMap[target];
        }
        return 0;
    }
};
