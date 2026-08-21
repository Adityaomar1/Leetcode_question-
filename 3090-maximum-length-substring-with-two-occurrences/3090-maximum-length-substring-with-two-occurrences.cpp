class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<int,int> mp;
        int low = 0;
        int ans = 0;
        for(int high = 0;high<s.size();high++){
            mp[s[high]]++;
            while(mp[s[high]]>2){
                mp[s[low]]--;
                low++;
            }
            int len = high-low+1;
            ans = max(ans,len);
        }
        return ans;
    }
};