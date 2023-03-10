class Solution 
{
public:
    vector<int> sortedSquares(vector<int>& nums) 
    {
        vector<int>::iterator pStart1=nums.begin();
        vector<int>::iterator pStart2=nums.begin();
        while(pStart1!=nums.end())
        {
            (*pStart1)=(*pStart1)*(*pStart1);
            pStart1++;
        }
        std::sort(pStart2,pStart1);
        return nums;
    }
};
