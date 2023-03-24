class Solution 
{
public:
    int numWays(int n) 
    {
        if(n<2)
        {
            return 1;
        }
        int frontNum=1,backNum=1;
        int Sum=1;
        int mod=1000000007;
        for(int i=2;i<=n;i++)
        {
            Sum=(frontNum+backNum)%mod;
            backNum=frontNum;
            frontNum=Sum;
        }
        return Sum;
    }
};
