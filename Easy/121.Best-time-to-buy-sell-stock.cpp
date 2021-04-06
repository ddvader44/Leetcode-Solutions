class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int high = INT_MIN;
        int low = INT_MAX;
        for(int i=0;i<prices.size();i++){
            low = min(low,prices[i]);
            high = max(high, prices[i] - low);
        }
        return high;
    }
};
