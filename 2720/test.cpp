class Solution 
{
public:
    char firstUniqChar(string s) 
    {
        if(s.empty())
        {
            return ' ';
        }
        std::unordered_map<char,int> countMap;
        for(auto e:s)
        {
            countMap[e]++;
        }
        std::string::iterator ptr=s.begin();
        while(ptr!=s.end())
        {
            if(countMap[*ptr]==1)
            {
                return *ptr;
            }
            ptr++;
        }
        return ' ';
    }
};
