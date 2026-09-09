class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        unordered_map<int,int> mp;
        int low = 0;
        int ans = 0;
        int n = nums.size();
        for(int high =0;high<n;high++){
            mp[nums[high]]++;
            while(mp.size()==st.size()){
                ans = ans+n-high;
                mp[nums[low]]--;
                if(mp[nums[low]]==0){
                    mp.erase(nums[low]);
                }
                low++;
            }
        }
        return ans;
    }
};