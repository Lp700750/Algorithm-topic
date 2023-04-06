class Solution 
{
public:
    bool exist(vector<vector<char>>& board, string word) 
    {
        int k=0;
        int m=board.size();
        int n=board[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(backTrack(board,word,i,j,0))
                {
                    return true;
                }
            }
        }
        return false;
    }
private:
    bool backTrack(vector<vector<char>>& board,string word,int i,int j,int k)
    {
        if(i<0||i>=board.size()||j<0||j>=board[0].size()||board[i][j]!=word[k])
        {
            return false;
        }
        if(k==word.size()-1)
        {
            return true;
        }
        board[i][j]='\0';
        bool result=backTrack(board,word,i+1,j,k+1)||backTrack(board,word,i-1,j,k+1)||
        backTrack(board,word,i,j+1,k+1)||backTrack(board,word,i,j-1,k+1);
        board[i][j]=word[k];
        return result;
    }
};
