class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int low =0;
        int cost =0;
        int ans =0;
        for(int high =0;high<s.size();high++){
            cost+= abs(s[high]-t[high]);
            while(cost > maxCost){
                cost-=abs(s[low]-t[low]);
                low++;
            }
            ans = max(ans,high-low+1);
        }    
        return ans;    
    }
};