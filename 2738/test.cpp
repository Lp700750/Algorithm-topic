class Solution 
{
public:
    int maxProfit(vector<int>& prices) 
    {
        int _minPrice=1e9;
        int _maxProfit=0;
        for(auto price:prices)
        {
            _maxProfit=std::max(_maxProfit,price-_minPrice);
            _minPrice=std::min(_minPrice,price);
        }
        return _maxProfit;
    }
};
