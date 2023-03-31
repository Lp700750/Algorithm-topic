class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        std::vector<int> desV;
        std::unordered_set<int> desSet;
        for(auto e:nums)
        {
            desSet.insert(e);
        }
        std::unordered_set<int>::iterator pSet=desSet.begin();
        while(pSet!=desSet.end())
        {
            int ret=target-(*pSet);
            if(desSet.find(ret)!=desSet.end())
            {
                desV.push_back(*pSet);
                desV.push_back(ret);
                return desV;
            }
            pSet++;
        }
        return {};
    }
};
