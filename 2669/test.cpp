class Solution 
{
public:
    int findRepeatNumber(vector<int>& nums) 
    {
        int count=0;
        std::unordered_map<int,int> countMap;
        std::vector<int>::iterator ptr=nums.begin();
        while(ptr!=nums.end())
        {
            count=++countMap[*ptr];
            if(count>1)
            {
                return *ptr;
            }
            ptr++;
        }
        return -1;
    }
};
