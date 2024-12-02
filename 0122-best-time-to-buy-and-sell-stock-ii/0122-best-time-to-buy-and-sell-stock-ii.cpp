class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maximumProfit = 0;
        int start = prices[0];
        int length = prices.size();
        for(int i = 1; i < length; i++)
        {
            if(start < prices[i])
                maximumProfit += prices[i] - start;
            start = prices[i];
        }
        return maximumProfit;
    }
};