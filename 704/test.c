ass Solution 
{
public:
    int binarySearch(vector<int>& nums,int left,int right,int target)
    {
        int mid=(left+right)/2;
        if(left>right)
        {
            return -1;
        }
        if(nums[mid]==target)
        {
            return mid;
        }
        if(nums[mid]>target)
        {
            return binarySearch(nums,left,mid-1,target);
        }
        else
        {
            return binarySearch(nums,mid+1,right,target);
        }

    }
    int search(vector<int>& nums, int target) 
    {
        int numSize=nums.size();
        int left=0;
        int right=numSize-1;
        int mid=numSize/2;
        return binarySearch(nums,left,right,target);
    }
};
