class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        int mx = INT_MIN;
        int mn = INT_MAX;
        for(int i=0;i<nums.size();i++){
           mx = max(mx,nums[i]);
           mn = min(mn,nums[i]);
        }
        unordered_set<int> st(nums.begin(),nums.end());
        for(int i=mn;i<mx;i++){
            if(st.find(i)==st.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};