class Solution 
{
private:
    int sum(int num)
    {
        int _result=0;
        while(num!=0)
        {
            _result+=num%10;
            num=num/10;
        }
        return _result;
    }
    int count(int i,int j,int k)
    {
        int num1=sum(i);
        int num2=sum(j);
        if((num1+num2)>k)
        {
            return 0;
        }
        return 1;
    }
public:
    int movingCount(int m, int n, int k) 
    {
        int result=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                result+=count(i,j,k);
            }
        }
        return result;
    }
};
