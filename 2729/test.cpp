class Solution 
{
public:
    string reverseLeftWords(string s, int n) 
    {
        std::string::iterator pFront=s.begin();
        std::string::iterator pBack=s.begin();
        std::string desStr;
        desStr.append(pFront+n,s.end());
        desStr.append(pBack,pFront+n);
        return desStr;
    }
};
