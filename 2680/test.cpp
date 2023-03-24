class Solution 
{
public:
    int fib(int n) 
    {
        // if(n==0||n==1)
        // {
        //     return n;
        // }
        // return fib(n-1)+fib(n-2);
        if(n<2)
        {
            return n;
        }
        int sum=1,ret=1,cnt=0;
        int mod=1000000007;
        for(int i=2;i<=n;i++)
        {
            sum=(cnt+ret)%mod;
            cnt=ret;
            ret=sum;
        }
        return sum;
    }
};
