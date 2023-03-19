class Solution 
{
public:
    int missingNumber(vector<int>& nums) 
    {
        int i=0;
        for(auto e:nums)
        {
            if(i!=e)
            {
                return i;
            }
            i++;
        }
        return i;
    }
};
