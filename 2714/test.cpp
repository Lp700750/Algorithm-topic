class Solution 
{
public:
    int maxSubArray(vector<int>& nums) 
    {
        //arrMax(i)表示在数组下标为i的时候连续数组最大的值
        int arrMax=0,_arrMax=nums[0];
        for(auto e:nums)
        {
            arrMax=std::max(arrMax+e,e);
            _arrMax=std::max(arrMax,_arrMax);
        }
        return _arrMax;
    }
};
