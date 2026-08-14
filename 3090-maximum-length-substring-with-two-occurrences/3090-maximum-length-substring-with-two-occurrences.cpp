class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<int,int> freq;
        int low = 0;
        int ans = 0;
        for(int high = 0;high<s.size();high++){
            freq[s[high]]++;
            while(freq[s[high]]>2){
                freq[s[low]]--;
                low++;
            }
            int len = high-low+1;
            ans = max(ans,len);
        }
        return ans;
    }
};