class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int i ,n=prices.size();
            int buy_stock=prices[0];
            int profit=0;
            if(n<=1){
                return 0;
            }
            for(i=0; i<n; i++){
              if(prices[i]<buy_stock){
                buy_stock=prices[i];
              } 
              if(prices[i]-buy_stock>profit){
                profit=prices[i]-buy_stock;
              } 
            }
            return profit;
        }
    };