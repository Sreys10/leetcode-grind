class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimum = prices[0];
        int maxprofit = 0;
        if(prices.empty()) return 0;

        for(int i = 0; i<prices.size(); i++){
            minimum = min(minimum, prices[i]);
            maxprofit = max(maxprofit, prices[i] - minimum);
        }

        return maxprofit;
    }
};
