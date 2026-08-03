class Solution {
public:
    int maxcount(vector<int> ans){
        int mx =0;
        for(int x: ans){
            mx = max(mx,x);
        }
        return mx;
    }
    int characterReplacement(string s, int k) {
        int res =0;
        vector<int> ans(256,0);
        int low =0;
        int n = s.size();
        for(int high =0;high<n;high++){
            ans[s[high]]++;
            int len = high-low+1;
            int mxcount = maxcount(ans);
            int diff = len - mxcount;
            while(diff>k){
                ans[s[low]]--;
                low++;
                len = high-low+1;
                mxcount = maxcount(ans);
                diff = len - mxcount;
            }
            len = high-low+1;
            res = max(res,len);
        }
        return res;
    }
};