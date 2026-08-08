class Solution {
public:
    int countsub(vector<int> &nums, int maxsum){
        int pieces = 1;
        int sum =0;
        for(int i =0;i<nums.size();i++){
            if(sum+nums[i]<=maxsum){
                sum+=nums[i];
            }
            else{
                pieces++;
                sum = nums[i];
            }
        }
        return pieces;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);
        int ans = high;
        while(low<=high){
            int mid = low+(high-low)/2;
            int pieces = countsub(nums,mid);
            if(pieces<=k){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};