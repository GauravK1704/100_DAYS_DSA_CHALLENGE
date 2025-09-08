class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int n=prices.size();
            int i, profit;
            if(n<=1){
                return 0;
            }
            for(i=1; i<n; i++){
                if(prices[i]>prices[i-1]){
                        profit+=prices[i]-prices[i-1];
                    
                }
            }
           return profit;
        }
    };