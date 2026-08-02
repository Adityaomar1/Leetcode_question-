class Solution {
public:
    int zcount(vector<int>& ans){
        return ans[0];
    }
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int low =0;
        int res = 0;
        vector<int> ans(2,0);
        for(int high =0;high<n;high++){
            ans[nums[high]]++;
            int zero_count = zcount(ans);
            while(zero_count>k){
                ans[nums[low]]--;
                low++;
                zero_count = zcount(ans);
            }
            int len = high-low+1;
            res = max(res,len);
        }
        return res;
    }
};