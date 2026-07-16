class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int> prefix(nums.size());
        int mx = 0;
        for(int i = 0;i<nums.size();i++){
            mx = max(mx,nums[i]);
            prefix[i] = gcd(mx,nums[i]);
        }
        sort(prefix.begin(),prefix.end());
        int i = 0;
        int j = prefix.size()-1;
        long long sum = 0;
        int long ans;
        while(i<j){
            ans = gcd(prefix[i],prefix[j]);
            sum+=ans;
            i++;j--;
        }
        return sum;
    }
};