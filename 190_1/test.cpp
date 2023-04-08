class Solution 
{
private:
    int row=0,col=0;
    int sum(int num)
    {
        int ret=0;
        while(num!=0)
        {
            ret+=num%10;
            num=num/10;
        }
        return ret;
    }
    int count(vector<vector<int>>& desVect,int i,int j,int k)
    {
        int num1=sum(i);
        int num2=sum(j);
        if(i>=row||j>=col||desVect[i][j]==1||(num1+num2)>k)
        {
            return 0;
        }
        desVect[i][j]=1;
        return 1+count(desVect,i+1,j,k)+count(desVect,i,j+1,k);
    }
public:
    int movingCount(int m, int n, int k) 
    {
        row=m;
        col=n;
        std::vector<vector<int>> desVect(m,vector<int>(n,0));
        int result=count(desVect,0,0,k);
        return result;
    }
};
