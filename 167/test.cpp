class Solution 
{
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        vector<int> desArr(2,0);
        vector<int>::iterator pStart=numbers.begin();
        vector<int>::iterator pEnd=numbers.end()-1;
        while(pStart<pEnd)
        {
           if((*pStart)+(*pEnd)>target)
           {
               pEnd--;
           }
           else if((*pStart)+(*pEnd)==target)
           {
               desArr[0]=(pStart-numbers.begin())+1;
               desArr[1]=(pEnd-numbers.begin())+1;
               return desArr;
           }
           else
           {
               pStart++;
           }
        }
        return desArr;
    }
};
