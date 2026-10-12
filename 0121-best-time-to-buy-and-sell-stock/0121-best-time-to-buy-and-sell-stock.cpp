class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int min_val = INT_MAX;
    int current;
    int max_p = INT_MIN;
    
    for(int i=0;i<prices.size();i++) {
        current = prices[i];
        if(current<min_val) {
            min_val = current;
        }
        max_p = max(max_p,current-min_val);
    }
    if(max_p != INT_MIN) {
        return max_p;
    }
        return 0;
    }
};
    