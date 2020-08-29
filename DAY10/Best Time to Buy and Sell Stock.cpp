class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxSell=0;
        int maxProfit=0;
        for(int i=prices.size()-1;i>0;i--){
            if(prices[i]>maxSell){
                maxSell=prices[i];
            }
            int k=maxSell-prices[i-1];
            if(k>maxProfit){
                maxProfit=k;
            }
        }
        return maxProfit;
    }
};
