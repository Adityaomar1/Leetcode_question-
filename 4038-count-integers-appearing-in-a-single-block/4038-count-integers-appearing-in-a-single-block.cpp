class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,int> blcount;
        for(int i =0;i<nums.size();i++){
            if(i==0 || nums[i]!=nums[i-1]){
                blcount[nums[i]]++;
            }
        }
        int ans =0;
        for(auto &p: blcount){
            if(p.second==1) ans++;
        }
        return ans;
    }
};