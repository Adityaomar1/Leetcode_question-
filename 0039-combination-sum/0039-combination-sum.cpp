class Solution {
public:
    void fun(vector<int>& candidates, int target, int idx, int n, vector<int>& diary, vector<vector<int>>& ans){
        if(target==0){
            ans.push_back(diary);
            return;
        }
        if(target <0) return;
        for(int i =idx;i<n;i++){
            diary.push_back(candidates[i]);
            fun(candidates,target-candidates[i],i,n,diary,ans);
            diary.pop_back();
        }
        return;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<int> diary;
        vector<vector<int>> ans;
        int idx =0;
        fun(candidates, target, idx, n, diary, ans);
        return ans;
    }
};