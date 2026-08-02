class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int> mp;
        int low =0;
        int high;
        int n = s.size();
        int res = 0;
        for(high = 0;high<n;high++){
            mp[s[high]]++;
            int k = high-low+1;
            while(mp.size()<k){
                mp[s[low]]--;
                if(mp[s[low]]==0){
                    mp.erase(s[low]);
                }
                low++;
                k= high-low+1;
            }
            if(mp.size()==k){
                int len = high-low+1;
                res = max(res,len);
            }
        }
        return res;
    }
};