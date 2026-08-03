class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int n = nums.size();
        int high =0;
        int low = 0;
        long long prod=1;
        int len =0;
        for(int high = 0;high<n;high++){
            prod*=nums[high];
            while(prod>=k){
                prod/=nums[low];
                low++;
            }
            len += high-low+1;
        }
        return len;
    }
};