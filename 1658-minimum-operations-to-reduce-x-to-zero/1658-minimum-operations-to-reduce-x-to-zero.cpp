class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int total =0;
        for(int num: nums){
            total+=num;
        }
        int target = total - x;
        if(target ==0){
            return nums.size();
        }
        int low =0;
        int sum =0;
        int maxlen = -1;
        int n = nums.size();
        for(int high =0;high <n;high++){
            sum+=nums[high];
            while(sum > target && low<=high){
                sum -= nums[low];
                low++;
            }
            if(sum == target){
                maxlen = max(maxlen,high-low+1);
            }
        }
        if(maxlen == -1) return -1;
        return n - maxlen;
    }
};