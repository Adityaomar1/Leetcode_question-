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
        reverse(ans.begin(),ans.end());
        int prod;
        for(int j=0;j<ans.size();j++){
            for(int i = j+1;i<ans.size();i++){
                prod = ans[i]*ans[j];
                if(prod>mn){
                    mn =prod;
                }
            }
        }
        return mn;
    }
};