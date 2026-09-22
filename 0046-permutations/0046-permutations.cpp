class Solution {
public:
    void fun(vector<int>& nums, int n, int idx, vector<int>& diary, vector<vector<int>>& ans,vector<bool>& visited){
        if(n==idx){
            ans.push_back(diary);
            return;
        }
        for(int i = 0;i<n;i++){
            if(visited[i]) continue;
            visited[i] = true;
            diary.push_back(nums[i]);
            fun(nums,n,idx+1,diary,ans,visited);
            diary.pop_back();
            visited[i] = false;
        }
        return;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        int idx = 0;
        vector<int> diary;
        vector<vector<int>> ans;
        vector<bool> visited(n,false);
        fun(nums,n,idx,diary,ans,visited);
        return ans;
    }
};