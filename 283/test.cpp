class Solution 
{
public:
    void moveZeroes(vector<int>& nums) 
    {
        //双指针
        // if(1==nums.size())
        // {
        //     return;
        // }
        // vector<int>::iterator pCurrent=nums.begin();
        // vector<int>::iterator pStart=nums.begin();
        // while(*pCurrent&&pCurrent!=nums.end()-1)
        // {
        //     pCurrent++;
        //     pStart=pCurrent;
        // }
        // while(pCurrent<nums.end()-1&&pStart<nums.end()-1)
        // {
        //     while(pCurrent!=nums.end()-1&&*pCurrent==0)
        //     {
        //         pCurrent++;
        //     }
        //     while(pStart!=nums.end()-1&&*pStart)
        //     {
        //         pStart++;
        //     }
        //     std::swap(*pCurrent,*pStart);
        // }

        //双节点
        int j=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                swap(nums[j],nums[i]);
                j++;
            }
        }
    }
};
