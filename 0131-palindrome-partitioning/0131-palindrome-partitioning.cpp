class Solution {
public:
    bool ispalindrome(string& s, int l, int r){
        while(l<r){
            if(s[l]!=s[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
    void fun(string& s, int idx, int n, vector<string>& diary, vector<vector<string>>& res){
        if(idx ==n){
            res.push_back(diary);
        }
        for(int i = idx;i<n;i++){
            if(ispalindrome(s,idx,i)){
                diary.push_back(s.substr(idx,i-idx+1));
                fun(s,i+1,n,diary,res);
                diary.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        int n = s.size();
        vector<string> diary;
        vector<vector<string>> res;
        fun(s,0,n,diary,res);
        return res;
    }
};