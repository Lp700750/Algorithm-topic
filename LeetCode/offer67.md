# 把字符串转换成整数
```C++
class Solution 
{
public:
    int strToInt(string str) 
    {
        if(str.empty()) return 0;
        long long res = 0;
        int n = str.size();
        int flag = 1;
        for(int i = 0; i < n; i++)
        {
            // 首元素是字母时
            if(str[i] != ' ' && str[i] != '+' && str[i] != '-' && !isdigit(str[i])) return 0;

            // 当首元素是空格时
            if(i < n && str[i] == ' ')
            {
                while(i < n && str[i] == ' ') i++;
                if(str[i] != ' ' && str[i] != '+' && str[i] != '-' && !isdigit(str[i])) return 0;
            }

            // 当首元素是+-时
            if(i < n && (str[i] == '+' || str[i] == '-')) 
            {
                if(str[i] == '-') flag = -1;
                i++;
                while(i < n && isdigit(str[i]))
                {
                    if(flag > 0) 
                    {
                        res = res * 10 + (str[i] - '0');
                        if(flag * res > INT_MAX)
                        {
                            res = INT_MAX;
                            break;
                        }
                    }
                    if(flag < 0)
                    {
                        res = res * 10 + ('0' - str[i]);
                        if(res < INT_MIN)
                        {
                            res = INT_MIN;
                            break;
                        }
                    }
                    i++;
                }
                break;            
            }

            // 当是数字的时候
            if(i < n && isdigit(str[i]))
            {
                while(i < n && isdigit(str[i]))
                {
                    res = (res * 10 + (str[i] - '0')) > 0x7FFFFFFF ? 0x7FFFFFFF : (res * 10 + (str[i] - '0'));
                    if(res == 0x7FFFFFFF) break;
                    i++;
                }
                break;
            }
        }
        return res;
    }
};
```
