class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> ans(n);
        for(int i =0;i<prices.size();i++){
            ans[i] = prices[i];
            for(int j =i+1;j<prices.size();j++){
                if(prices[j]<=prices[i]){
                    ans[i] = prices[i] - prices[j];
                    break;
                }
            }
        }
        return ans;
    }
};