class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mn = INT_MAX;
        int mx = INT_MIN;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]<mn){
                mn = nums[i];
            }
            if(nums[i]>mx){
                mx = nums[i];
            }
        }
        int ans = gcd(mn,mx);
        return ans;
    }
};