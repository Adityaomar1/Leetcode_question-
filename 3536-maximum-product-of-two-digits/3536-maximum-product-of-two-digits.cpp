class Solution {
public:
    int maxProduct(int n) {
        int mn= INT_MIN;
        vector<int> ans;
        while(n>0){
            int d = n%10;
            ans.push_back(d);
            n/=10;
        }
        sort(ans.begin(),ans.end());
        int m = ans.size();
        int prod = ans[m-1]*ans[m-2];
        return prod;
    }
};