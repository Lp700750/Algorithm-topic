class Solution 
{
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) 
    {
        int m=matrix.size()-1;
        int i=0;

        while(m>=0&&i<matrix[0].size())
        {
            if(matrix[m][i]>target)
            {
                m--;
            }
            else if(matrix[m][i]<target)
            {
                i++;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};
