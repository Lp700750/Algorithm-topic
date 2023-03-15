class Solution 
{
public:
    int lengthOfLongestSubstring(string s) 
    {
        int k=0,sum=0;
        int sNum=s.size();
        unordered_set<char> dStr;
        for(int i=0;i<sNum;i++)
        {
            if(i!=0)
            {
                dStr.erase(s[i-1]);
            }
            while(k<sNum&&!dStr.count(s[k]))
            {
                dStr.insert(s[k]);
                k++;
            }
            sum=max(sum,k-i);
        }
        return sum;
    }
};
