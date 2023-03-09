ass Solution 
{
public:
    int binarySearch(int left,int right)
    {
        int mid=left+(right-left)/2;
        if(isBadVersion(1))
        {
            return 1;
        }
        if(!isBadVersion(1)&&isBadVersion(2))
        {
            return 2;
        }
        if(!isBadVersion(mid)&&isBadVersion(mid+1))
        {
            return mid+1;
        }
        if(!isBadVersion(left)&&isBadVersion(mid))
        {
            return binarySearch(left,mid);
        }
        else if(!isBadVersion(mid)&&isBadVersion(right))
        {
            return binarySearch(mid,right);
        }
        else
        {
            return right;
        }
    }
    int firstBadVersion(int n) 
    {
        return binarySearch(1,n);    
    }
};
