class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int min = *min_element(nums.begin(),nums.end());
        int count = 0;
        for(int i = 0;i<n;i++){
            int diff = nums[i] - min;
            count+=diff;
        }
        return count;
    }
};