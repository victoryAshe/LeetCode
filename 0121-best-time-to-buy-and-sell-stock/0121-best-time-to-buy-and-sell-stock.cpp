class Solution {
public:
    
    int buyPrice = INT_MAX;
    int maxProfit(vector<int>& prices) {
        int result = 0;
        
        for(int i = 0; i<prices.size(); i++)
        {
            if(buyPrice>prices[i]) buyPrice = prices[i];
            else result = max(prices[i]-buyPrice, result);
        }
        
        return result;
        
    }
};