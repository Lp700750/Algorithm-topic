class Solution 
{
public:
    int minArray(vector<int>& numbers) 
    {
        std::vector<int>::iterator pFront=numbers.end()-1;
        std::vector<int>::iterator pBack=numbers.end()-2;
        while(pBack>=numbers.begin())
        {
            if(*pBack<=*pFront)
            {
                pFront--;
                pBack--;
            }
            else
            {
                return *pFront;
            }
        }
        return *pFront;
    }
};
