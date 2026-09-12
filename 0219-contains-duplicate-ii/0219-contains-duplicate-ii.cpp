class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int low = 0;
        unordered_set<int> st;
        for(int high =0;high<nums.size();high++){

            if((high-low)> k){
                st.erase(nums[low]);
                low++;
            }
            if(st.count(nums[high])){
                return true;
            }
            st.insert(nums[high]);
        }
        return false;
    }
};