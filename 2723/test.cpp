class Solution 
{
public:
    int lengthOfLongestSubstring(string s) 
    {
        std::unordered_set<char> tempSet;
        int j=0,result=0;
        for(int i=0;i<s.size();i++)
        {
            while(j<s.size()&&tempSet.find(s[j])==tempSet.end())
            {
                tempSet.insert(s[j]);
                result=std::max(result,j-i+1);
                ++j;
            }
            tempSet.erase(s[i]);
        }
        return result;
    }
};
