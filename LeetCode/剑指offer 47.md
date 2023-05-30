## 方法1
```c++
class Solution 
{
public:
    int maxValue(vector<vector<int>>& grid) 
    {
        int row=grid.size();
        int col=grid[0].size();
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(i==0&&j==0)
                {
                    continue;
                }
                else if(i==0)
                {
                    grid[i][j]+=grid[i][j-1];
                }
                else if(j==0)
                {
                    grid[i][j]+=grid[i-1][j];
                }
                else
                {
                    grid[i][j]+=std::max(grid[i-1][j],grid[i][j-1]);
                }
            }
        }
        return grid[row-1][col-1];
    }
};
```
## 方法2
```c++
class Solution 
{
public:
    int maxValue(vector<vector<int>>& grid) 
    {
        //设置dp表
        int m=grid.size();
        int n=grid[0].size();
        std::vector<std::vector<int>> dp(m+1,std::vector<int>(n+1));

        //设置初始值

        //填写dp表
        for(int i=1;i<m+1;i++)
        {
            for(int j=1;j<n+1;j++)
            {
                dp[i][j]=grid[i-1][j-1]+std::max(dp[i][j-1],dp[i-1][j]);
            }
        }
        
        //返回值
        return dp[m][n];
    }
};
```
