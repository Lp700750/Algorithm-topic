class Solution 
{
public:
    string reverseWords(string s) 
    {
        std::string desStr;
        int j=s.size()-1;
        while(j>=0)
        {
            while(j>=0&&s[j]==' ')
            {
                j--;
            }
            char* pBack=&s[j+1];
            while(j>=0&&s[j]!=' ')
            {
                j--;
            }
            char* pFront=&s[j+1];
            desStr.append(pFront,pBack);
            desStr.push_back(' ');
        }
        std::string::iterator pStr=desStr.end()-1;
        while(*pStr==' ')
        {
            desStr.pop_back();
            pStr--;
        }
        return desStr; 
    }
};
