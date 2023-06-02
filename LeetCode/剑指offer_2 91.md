# 粉刷房子
```C++
class Solution 
{
public:
    int minCost(vector<vector<int>>& costs) 
    {
        int m=costs.size();
        std::vector<vector<int>> dp(m+1,std::vector<int>(7,INT_MAX));

        for(int i=0;i<7;i++) dp[0][i]=0;

        for(int i=1;i<m+1;i++)
        {
            for(int j=2;j<5;j++)
            {
                int min1=min(dp[i-1][j-1],dp[i-1][j+1]);
                int min2=min(dp[i-1][j-2],dp[i-1][j+2]);
                int min3=min(min1,min2);
                dp[i][j]=min3+costs[i-1][j-2];
            }
        }

        int min=INT_MAX;
        for(int i=2;i<5;i++) min=std::min(min,dp[m][i]);
        return min; 
    }
};
```
