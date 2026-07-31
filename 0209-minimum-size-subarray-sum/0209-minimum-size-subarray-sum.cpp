class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int high=0;
        int low = 0;
        int result = INT_MAX;
        int n = nums.size();
        int sum =0;
        while(high<n){
            sum+=nums[high];
            while(sum>=target){
                int len = high-low+1;
                result = min(result,len);
                sum-=nums[low];
                low++;
            }
            high++;
        }
        return result == INT_MAX ? 0 : result;
    }
};