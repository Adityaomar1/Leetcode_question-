class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count = 0;
        int n = nums.size();
        int med = nums[n/2] ;
        for(int i =0;i<n;i++){
            int diff = nums[i] - med;
            count = count + abs(diff);
        }
        return count;
    }
};