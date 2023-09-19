# 构建乘积数组
```C++
class Solution 
{
public:
    vector<int> constructArr(vector<int>& a) 
    {
        int n = a.size();
        if(n == 0) return {};
        vector<int> b(n);
        b[0] = 1;
        int temp = 1;
        for(int i = 1; i < n; i++)
        {
            b[i] = b[i - 1] * a[i - 1];
        }
        for(int i = n - 2; i >= 0; i--)
        {
            temp *= a[i + 1];
            b[i] = b[i] * temp;
        }
        return b;
    }
};
```
