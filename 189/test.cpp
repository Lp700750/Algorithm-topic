class Solution 
{
public:
    void rotate(vector<int>& nums, int k) 
    {
        //双指针原地移动
        // vector<int>::iterator pStart=nums.begin();
        // if(k)
        // {
        //     for(int i=0;i<k;i++)
        //     {
        //         vector<int>::iterator pEnd=nums.end()-1;
        //         int temp=*pEnd;
        //         while(pEnd!=pStart)
        //         {
        //             *pEnd=*(pEnd-1);
        //             pEnd--;
        //         }
        //         *pStart=temp;
        //     }
        // }


        // 1,2,3,4,5,6,7
        // 7,6,5,4,3,2,1
        // 5,6,7,1,2,3,4

        //反转数组
        // if(1==nums.size())
        // {
        //     return;
        // }
        if(k)
        {
            k=k%nums.size();
            vector<int>::iterator pStart=nums.begin();
            vector<int>::iterator pEnd=nums.end();
            std::reverse(pStart,pEnd);
            std::reverse(pStart,pStart+k);
            std::reverse(pStart+k,pEnd);
        }

    }
};
