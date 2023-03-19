class Solution 
{
public:
    string replaceSpace(string s) 
    {
        if(s.empty())
        {
            return s;
        }
        std::string::iterator pFront=s.begin();
        std::string::iterator pBack=s.begin();
        std::string desStr;
        while(pFront!=s.end())
        {
            if(*pFront==' ')
            {
                desStr.append(pBack,pFront);
                desStr.append("%20");
                pBack=pFront;
                pBack++;
            }
            pFront++;
        }
        desStr.append(pBack,pFront);
        return desStr;
    }
};
